#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)112;
unsigned int var_3 = 2459060737U;
signed char var_4 = (signed char)121;
unsigned short var_9 = (unsigned short)51336;
unsigned int var_11 = 1401814936U;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
long long int var_14 = -5396657925856905524LL;
unsigned short var_15 = (unsigned short)51100;
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
