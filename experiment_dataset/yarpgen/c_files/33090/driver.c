#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55586;
unsigned char var_7 = (unsigned char)171;
unsigned char var_9 = (unsigned char)223;
int var_11 = -634614174;
long long int var_12 = -8233480602510694991LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3140895100759673550LL;
unsigned long long int var_16 = 1361871888279356176ULL;
int zero = 0;
int var_17 = 1766441576;
int var_18 = 1748817939;
signed char var_19 = (signed char)121;
int var_20 = -1461687951;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
