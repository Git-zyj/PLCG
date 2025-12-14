#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50757;
unsigned long long int var_2 = 13437398595725472848ULL;
unsigned long long int var_8 = 14172509826276736322ULL;
unsigned short var_11 = (unsigned short)56415;
unsigned int var_14 = 1141784391U;
int zero = 0;
unsigned int var_16 = 4064679626U;
unsigned short var_17 = (unsigned short)23350;
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
