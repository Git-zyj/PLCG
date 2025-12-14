#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3009989186U;
long long int var_1 = -5577536586445780097LL;
short var_2 = (short)-16692;
signed char var_3 = (signed char)-75;
unsigned long long int var_4 = 2716172483526979103ULL;
unsigned char var_5 = (unsigned char)144;
int var_7 = 801741517;
unsigned long long int var_8 = 6910425316153590793ULL;
unsigned int var_9 = 3667205004U;
short var_12 = (short)15519;
signed char var_14 = (signed char)61;
int zero = 0;
unsigned short var_15 = (unsigned short)12848;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)33899;
short var_18 = (short)8977;
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
