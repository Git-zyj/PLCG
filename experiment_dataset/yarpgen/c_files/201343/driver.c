#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8981094906456564993LL;
long long int var_1 = -8007970243324992304LL;
unsigned int var_3 = 3585180253U;
unsigned int var_7 = 1231040035U;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
short var_14 = (short)15201;
long long int var_15 = 3517545188071748302LL;
int var_16 = -740390980;
short var_17 = (short)-13705;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
