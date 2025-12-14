#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned short var_3 = (unsigned short)30573;
unsigned short var_7 = (unsigned short)10756;
long long int var_10 = -8739051212676402793LL;
short var_11 = (short)-20825;
int zero = 0;
unsigned long long int var_15 = 17653877412052937807ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2932679012290867592LL;
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
