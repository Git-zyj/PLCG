#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14833357294464200889ULL;
int var_4 = 1022360761;
short var_14 = (short)22682;
long long int var_18 = -4644163306921959365LL;
int zero = 0;
unsigned long long int var_20 = 5603010102662515120ULL;
long long int var_21 = 2210330776791128244LL;
unsigned char var_22 = (unsigned char)167;
unsigned int var_23 = 1403573537U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
