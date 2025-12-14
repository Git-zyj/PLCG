#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2801010180U;
unsigned char var_1 = (unsigned char)158;
signed char var_2 = (signed char)55;
unsigned long long int var_3 = 5424251772076914408ULL;
int var_4 = 1454155039;
signed char var_5 = (signed char)-115;
unsigned long long int var_6 = 4660817056235089977ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2472976757U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
