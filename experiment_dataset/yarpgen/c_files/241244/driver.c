#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2765220460790952957ULL;
unsigned int var_1 = 1152660993U;
long long int var_2 = 8302594446597668187LL;
int var_5 = 731801706;
unsigned long long int var_9 = 17607361089061096641ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)33946;
long long int var_11 = -766713842713183175LL;
unsigned short var_12 = (unsigned short)40713;
unsigned int var_13 = 1321119554U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
