#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2801486635331382200LL;
unsigned char var_3 = (unsigned char)216;
unsigned long long int var_8 = 1755768612685741006ULL;
unsigned int var_9 = 1696871001U;
unsigned int var_11 = 1604707539U;
long long int var_13 = -2976080706185144964LL;
unsigned long long int var_15 = 18120558204904564288ULL;
unsigned long long int var_18 = 16772933466498079503ULL;
int zero = 0;
unsigned long long int var_20 = 2491966314028098766ULL;
unsigned int var_21 = 3807054274U;
long long int var_22 = 1749741943607581617LL;
_Bool var_23 = (_Bool)0;
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
