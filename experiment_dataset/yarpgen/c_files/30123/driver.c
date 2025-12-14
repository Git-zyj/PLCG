#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3046740736912787162ULL;
short var_3 = (short)9754;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)33712;
unsigned long long int var_7 = 11421383269093473180ULL;
unsigned char var_14 = (unsigned char)121;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)196;
unsigned int var_18 = 3164678757U;
void init() {
}

void checksum() {
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
