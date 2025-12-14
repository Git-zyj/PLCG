#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1497890753;
unsigned long long int var_5 = 13648424852848826421ULL;
unsigned int var_6 = 457388154U;
unsigned long long int var_14 = 7422289499075716644ULL;
int zero = 0;
unsigned int var_17 = 1632847215U;
signed char var_18 = (signed char)106;
unsigned char var_19 = (unsigned char)59;
void init() {
}

void checksum() {
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
