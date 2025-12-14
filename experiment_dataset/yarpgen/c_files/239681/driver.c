#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3886368415780022149LL;
unsigned int var_1 = 1411603241U;
unsigned long long int var_8 = 7747100192311266079ULL;
unsigned long long int var_13 = 8279784391316626744ULL;
int zero = 0;
signed char var_15 = (signed char)52;
unsigned short var_16 = (unsigned short)41942;
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
