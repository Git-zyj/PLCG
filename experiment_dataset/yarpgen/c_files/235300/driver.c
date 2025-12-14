#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)18;
_Bool var_4 = (_Bool)0;
short var_6 = (short)30610;
int var_7 = -1767136492;
unsigned long long int var_9 = 8797386405662184340ULL;
unsigned long long int var_10 = 13824668883736421551ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)161;
unsigned char var_12 = (unsigned char)187;
unsigned int var_13 = 4152324110U;
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
