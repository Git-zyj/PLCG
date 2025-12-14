#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1045051637U;
unsigned char var_12 = (unsigned char)228;
long long int var_14 = -1786956706444698351LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2712092518787715557ULL;
unsigned short var_21 = (unsigned short)26717;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
