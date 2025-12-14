#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1272859217U;
unsigned int var_1 = 4263385963U;
unsigned short var_3 = (unsigned short)51636;
int var_5 = 890933107;
long long int var_8 = 2490668303514253357LL;
unsigned short var_9 = (unsigned short)55728;
int zero = 0;
unsigned short var_17 = (unsigned short)42501;
unsigned int var_18 = 1978839348U;
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
