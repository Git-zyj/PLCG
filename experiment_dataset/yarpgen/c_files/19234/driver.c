#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1318817140;
long long int var_9 = 7192228402444252139LL;
unsigned long long int var_12 = 13893277650141698481ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1289409001U;
short var_18 = (short)11740;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3168229305U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
