#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30034;
unsigned long long int var_6 = 15620752503200001332ULL;
unsigned int var_8 = 1359226461U;
unsigned long long int var_9 = 6022927496273391287ULL;
unsigned int var_11 = 210004607U;
int zero = 0;
unsigned long long int var_12 = 13872451763115910317ULL;
unsigned short var_13 = (unsigned short)19608;
unsigned int var_14 = 3405568799U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
