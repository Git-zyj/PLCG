#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18183;
unsigned long long int var_6 = 14223099554583369654ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3171863392U;
unsigned int var_17 = 2351159188U;
int zero = 0;
unsigned char var_18 = (unsigned char)64;
unsigned char var_19 = (unsigned char)48;
void init() {
}

void checksum() {
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
