#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)40;
unsigned char var_7 = (unsigned char)47;
unsigned int var_9 = 4011349544U;
int var_10 = 1326395059;
long long int var_11 = -5990862107108456348LL;
int zero = 0;
long long int var_12 = -657695715828838774LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
