#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3726190194350050677LL;
short var_2 = (short)8397;
unsigned long long int var_4 = 4082031054223162544ULL;
unsigned long long int var_6 = 14076428935859838721ULL;
unsigned long long int var_8 = 11862735883606293497ULL;
unsigned char var_12 = (unsigned char)240;
int zero = 0;
long long int var_18 = -5271153593379118981LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4187018324U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
