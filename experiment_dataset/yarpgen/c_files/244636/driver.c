#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13021563062233876896ULL;
long long int var_9 = -3049615637087507242LL;
unsigned int var_11 = 2148767079U;
unsigned char var_14 = (unsigned char)94;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2829077456U;
long long int var_18 = -5801292893835161815LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
