#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)53097;
unsigned char var_7 = (unsigned char)71;
unsigned long long int var_8 = 8962060300156082106ULL;
short var_9 = (short)18059;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 5811984383714349335ULL;
long long int var_12 = 2806014907480608261LL;
long long int var_13 = 7572024119974293643LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
