#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16510;
_Bool var_7 = (_Bool)1;
int var_8 = 1201903009;
signed char var_17 = (signed char)83;
int zero = 0;
signed char var_19 = (signed char)-24;
unsigned short var_20 = (unsigned short)19062;
int var_21 = -1262435700;
signed char var_22 = (signed char)12;
unsigned short var_23 = (unsigned short)11127;
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
