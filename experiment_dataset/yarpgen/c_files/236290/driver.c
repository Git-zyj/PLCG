#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30079;
signed char var_1 = (signed char)-101;
short var_2 = (short)-19909;
unsigned short var_6 = (unsigned short)65508;
long long int var_8 = -6952742379546625147LL;
unsigned long long int var_9 = 17526574684434964517ULL;
long long int var_13 = -5031769664209554456LL;
int zero = 0;
long long int var_16 = -8513485528473339756LL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)10536;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
