#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6895;
int var_1 = -973359460;
_Bool var_2 = (_Bool)1;
int var_5 = 99578563;
long long int var_6 = -9081724073341609378LL;
long long int var_7 = -2086123542211991192LL;
int zero = 0;
int var_12 = 1897772990;
unsigned int var_13 = 1132779187U;
long long int var_14 = -3793640084325141210LL;
unsigned char var_15 = (unsigned char)224;
long long int var_16 = -8247070553652263729LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
