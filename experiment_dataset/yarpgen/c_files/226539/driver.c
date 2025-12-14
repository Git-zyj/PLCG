#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 827665464754548689ULL;
unsigned short var_12 = (unsigned short)994;
short var_13 = (short)-21843;
int zero = 0;
unsigned int var_19 = 2095018874U;
unsigned int var_20 = 4170670957U;
unsigned short var_21 = (unsigned short)38836;
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
