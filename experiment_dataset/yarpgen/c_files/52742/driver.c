#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1121687269U;
unsigned char var_3 = (unsigned char)73;
unsigned short var_6 = (unsigned short)45996;
unsigned long long int var_16 = 14200936338805917961ULL;
int zero = 0;
long long int var_17 = 5110482737995857545LL;
unsigned char var_18 = (unsigned char)28;
int var_19 = -18202703;
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
