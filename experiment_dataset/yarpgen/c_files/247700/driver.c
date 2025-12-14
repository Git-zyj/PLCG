#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8077200551917999814ULL;
unsigned char var_5 = (unsigned char)213;
unsigned long long int var_7 = 16368745950091406165ULL;
unsigned int var_10 = 160601233U;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3478096465452877881LL;
long long int var_13 = 6188577685495934661LL;
void init() {
}

void checksum() {
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
