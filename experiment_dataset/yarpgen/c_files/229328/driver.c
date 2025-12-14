#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6624;
unsigned char var_2 = (unsigned char)42;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)520;
long long int var_10 = -9109084576032849928LL;
int zero = 0;
long long int var_12 = -5764007161018652376LL;
signed char var_13 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
