#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38597;
long long int var_3 = -9212817653013493411LL;
long long int var_5 = 4168991832132944945LL;
long long int var_11 = -9177376235373889771LL;
unsigned int var_14 = 2386068086U;
int zero = 0;
unsigned int var_15 = 3028955001U;
long long int var_16 = 8374967261076402350LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
