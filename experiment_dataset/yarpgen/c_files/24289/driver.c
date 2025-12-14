#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-106;
unsigned long long int var_9 = 12751707554808490893ULL;
unsigned int var_10 = 3437091197U;
long long int var_12 = -7127974889961123834LL;
int zero = 0;
unsigned long long int var_14 = 9428909588275687464ULL;
unsigned int var_15 = 292282216U;
unsigned int var_16 = 2450625478U;
short var_17 = (short)29528;
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
