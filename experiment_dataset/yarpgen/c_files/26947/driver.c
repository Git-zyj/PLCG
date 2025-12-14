#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17515210187331925995ULL;
long long int var_2 = -1948174216851322896LL;
long long int var_4 = 5653249127993563940LL;
unsigned long long int var_5 = 13379452756987335767ULL;
unsigned int var_7 = 3275980365U;
unsigned char var_9 = (unsigned char)100;
unsigned char var_13 = (unsigned char)114;
int zero = 0;
unsigned char var_15 = (unsigned char)49;
short var_16 = (short)14574;
unsigned int var_17 = 1356758333U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
