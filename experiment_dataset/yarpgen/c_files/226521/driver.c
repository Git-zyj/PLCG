#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -991854962;
int var_2 = -1191731242;
unsigned char var_5 = (unsigned char)136;
signed char var_10 = (signed char)-61;
unsigned int var_15 = 734212422U;
int zero = 0;
signed char var_16 = (signed char)74;
short var_17 = (short)18828;
int var_18 = -967245067;
unsigned char var_19 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
