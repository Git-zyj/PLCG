#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4861987265699078384LL;
long long int var_2 = 6099437518692151923LL;
unsigned short var_4 = (unsigned short)49855;
unsigned long long int var_7 = 4645904634276029840ULL;
int var_13 = 1895984450;
int zero = 0;
long long int var_16 = 4390407351407444772LL;
long long int var_17 = -7218486658098791753LL;
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
