#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 52296354422561398LL;
int var_5 = -178956770;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 602317007U;
int var_10 = 1124016653;
unsigned long long int var_11 = 12835267284869281447ULL;
int zero = 0;
short var_13 = (short)-18791;
short var_14 = (short)11192;
unsigned long long int var_15 = 13935430771703759043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
