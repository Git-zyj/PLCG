#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7876575754824691052LL;
unsigned int var_4 = 1837280563U;
unsigned short var_7 = (unsigned short)57062;
unsigned int var_8 = 491097190U;
unsigned long long int var_9 = 2683547265901595723ULL;
long long int var_13 = -9142793987152765627LL;
unsigned char var_15 = (unsigned char)50;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -568127870228370449LL;
void init() {
}

void checksum() {
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
