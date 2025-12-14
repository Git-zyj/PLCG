#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2754430691U;
long long int var_9 = 8627734329485092333LL;
long long int var_17 = 6557392859154443784LL;
int zero = 0;
unsigned int var_19 = 3028596285U;
unsigned long long int var_20 = 6295374941324430948ULL;
unsigned short var_21 = (unsigned short)49774;
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
