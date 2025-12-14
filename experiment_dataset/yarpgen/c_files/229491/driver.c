#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
_Bool var_4 = (_Bool)0;
long long int var_10 = -1388644440104429366LL;
unsigned int var_15 = 2362036516U;
unsigned char var_16 = (unsigned char)229;
int zero = 0;
int var_20 = 1877170365;
int var_21 = -790538022;
unsigned long long int var_22 = 14358001756311537391ULL;
unsigned long long int var_23 = 13648980548872149637ULL;
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
