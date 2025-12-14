#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7517464145694805741LL;
signed char var_1 = (signed char)-100;
short var_2 = (short)-25698;
unsigned long long int var_5 = 16453040449301642892ULL;
unsigned long long int var_7 = 7119907768507697925ULL;
unsigned char var_8 = (unsigned char)42;
unsigned int var_11 = 2900232287U;
signed char var_12 = (signed char)-111;
signed char var_13 = (signed char)-51;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4496963983434305884ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
