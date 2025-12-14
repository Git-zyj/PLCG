#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 941827489U;
long long int var_5 = 2018822624554997002LL;
unsigned long long int var_9 = 5166114051801930408ULL;
unsigned int var_11 = 798546415U;
int zero = 0;
int var_17 = 1090689050;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
