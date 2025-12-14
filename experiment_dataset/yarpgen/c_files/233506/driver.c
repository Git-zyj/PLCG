#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1328536163445976391LL;
unsigned short var_6 = (unsigned short)54085;
unsigned short var_8 = (unsigned short)25671;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 8719947291854625955ULL;
short var_11 = (short)-20515;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
