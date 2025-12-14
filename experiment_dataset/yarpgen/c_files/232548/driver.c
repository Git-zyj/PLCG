#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1269485035U;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_5 = 886639719;
int var_7 = -78928943;
unsigned short var_8 = (unsigned short)10511;
int var_9 = 317433776;
signed char var_10 = (signed char)-53;
int zero = 0;
unsigned short var_12 = (unsigned short)15218;
int var_13 = -834490043;
unsigned short var_14 = (unsigned short)48630;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
