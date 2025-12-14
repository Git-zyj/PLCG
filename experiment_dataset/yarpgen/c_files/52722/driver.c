#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5699951882967956351LL;
unsigned char var_3 = (unsigned char)23;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-21927;
unsigned long long int var_8 = 8029949173618425565ULL;
int zero = 0;
signed char var_12 = (signed char)-42;
unsigned int var_13 = 3058886336U;
unsigned long long int var_14 = 7551921180653838134ULL;
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
