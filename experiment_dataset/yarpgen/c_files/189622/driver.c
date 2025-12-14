#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14702;
signed char var_3 = (signed char)-20;
unsigned long long int var_5 = 4025676536874111291ULL;
unsigned long long int var_10 = 3195373767349820158ULL;
long long int var_11 = 4766125646107747801LL;
unsigned char var_14 = (unsigned char)145;
int zero = 0;
short var_15 = (short)-19659;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15608720558674158569ULL;
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
