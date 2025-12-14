#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
int var_3 = 946171324;
signed char var_6 = (signed char)93;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 1498107193864020189ULL;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-27;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
