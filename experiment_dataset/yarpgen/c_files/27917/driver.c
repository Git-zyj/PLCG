#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5037707175077132722LL;
unsigned short var_4 = (unsigned short)15445;
_Bool var_9 = (_Bool)0;
unsigned long long int var_14 = 6684377693289245946ULL;
int zero = 0;
long long int var_16 = -7030744426311911706LL;
unsigned char var_17 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
