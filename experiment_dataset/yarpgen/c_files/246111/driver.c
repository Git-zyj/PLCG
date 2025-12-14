#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3265181747U;
signed char var_6 = (signed char)-109;
_Bool var_7 = (_Bool)0;
int var_8 = 163487930;
int zero = 0;
unsigned long long int var_14 = 13741074757323634541ULL;
signed char var_15 = (signed char)-79;
void init() {
}

void checksum() {
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
