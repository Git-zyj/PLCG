#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned char var_3 = (unsigned char)20;
unsigned short var_4 = (unsigned short)29236;
unsigned int var_8 = 907692565U;
int var_9 = -1709875531;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2899765108555086910ULL;
int zero = 0;
signed char var_17 = (signed char)-51;
unsigned char var_18 = (unsigned char)53;
unsigned char var_19 = (unsigned char)105;
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
