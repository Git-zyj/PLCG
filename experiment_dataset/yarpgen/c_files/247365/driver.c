#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21500;
short var_3 = (short)4385;
short var_6 = (short)-22429;
unsigned short var_7 = (unsigned short)21692;
long long int var_8 = -2656236709016909168LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)21923;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)32902;
unsigned long long int var_15 = 6008786958789922677ULL;
unsigned char var_16 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
