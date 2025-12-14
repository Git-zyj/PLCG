#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42069;
unsigned short var_1 = (unsigned short)9430;
unsigned short var_2 = (unsigned short)56100;
unsigned char var_5 = (unsigned char)236;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)21057;
unsigned short var_8 = (unsigned short)51476;
unsigned int var_9 = 2822699900U;
unsigned long long int var_10 = 18435704314116006080ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)23;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)16808;
unsigned long long int var_15 = 11750444257506759346ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
