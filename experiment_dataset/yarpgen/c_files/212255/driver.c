#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13797867786146691563ULL;
short var_4 = (short)3655;
unsigned short var_5 = (unsigned short)44748;
short var_7 = (short)4360;
signed char var_8 = (signed char)-64;
unsigned short var_9 = (unsigned short)59379;
int zero = 0;
unsigned long long int var_12 = 3793722782186341795ULL;
signed char var_13 = (signed char)35;
unsigned short var_14 = (unsigned short)11353;
short var_15 = (short)15893;
short var_16 = (short)5498;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
