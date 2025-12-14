#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 4889396338148871508ULL;
unsigned long long int var_5 = 12977119582928831932ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1037314466U;
unsigned char var_8 = (unsigned char)70;
long long int var_9 = -5713143259555234977LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1019461621;
int zero = 0;
unsigned long long int var_15 = 1740922339889781954ULL;
signed char var_16 = (signed char)69;
unsigned int var_17 = 4239582242U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
