#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
int var_2 = -1864007689;
signed char var_3 = (signed char)113;
int var_9 = 2009485812;
signed char var_10 = (signed char)-20;
unsigned short var_11 = (unsigned short)9993;
int zero = 0;
short var_19 = (short)15059;
unsigned short var_20 = (unsigned short)41095;
short var_21 = (short)-29719;
unsigned short var_22 = (unsigned short)36991;
unsigned short var_23 = (unsigned short)42081;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
