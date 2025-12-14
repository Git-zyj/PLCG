#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned short var_1 = (unsigned short)30289;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1866886473U;
long long int var_10 = -5710808234142885435LL;
long long int var_11 = -2044481793053392651LL;
long long int var_12 = -2478684194110731434LL;
int zero = 0;
unsigned long long int var_14 = 4741073902150747544ULL;
unsigned int var_15 = 4022823346U;
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
