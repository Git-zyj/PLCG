#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2257700852521358063LL;
unsigned long long int var_6 = 15071139608517476979ULL;
int var_7 = 816060353;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-122;
int zero = 0;
unsigned char var_11 = (unsigned char)21;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
