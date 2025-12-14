#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65342;
long long int var_4 = 1077137093714889794LL;
long long int var_6 = -5076914561163461589LL;
unsigned long long int var_9 = 1090640833209642172ULL;
unsigned short var_11 = (unsigned short)22994;
int zero = 0;
unsigned short var_19 = (unsigned short)65313;
unsigned int var_20 = 3483679224U;
long long int var_21 = -4328469836376749626LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
