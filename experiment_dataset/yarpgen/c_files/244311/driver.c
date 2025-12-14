#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32003;
signed char var_5 = (signed char)22;
unsigned int var_7 = 3784819364U;
short var_10 = (short)-16184;
unsigned short var_15 = (unsigned short)23672;
int zero = 0;
unsigned long long int var_18 = 4870810610775495672ULL;
short var_19 = (short)-9662;
unsigned int var_20 = 631247049U;
unsigned long long int var_21 = 11102132466098656056ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
