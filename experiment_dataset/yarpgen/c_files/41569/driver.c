#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2020636533U;
unsigned int var_13 = 1928128418U;
unsigned int var_14 = 2465029744U;
int zero = 0;
unsigned int var_16 = 2616595006U;
unsigned char var_17 = (unsigned char)18;
unsigned int var_18 = 1344241983U;
unsigned long long int var_19 = 13998029872907289564ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
