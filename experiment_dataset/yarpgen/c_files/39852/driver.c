#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1335117713;
int var_2 = -1931408632;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)22112;
signed char var_12 = (signed char)69;
short var_18 = (short)-28005;
int zero = 0;
long long int var_20 = 2529392348979017547LL;
unsigned char var_21 = (unsigned char)192;
unsigned int var_22 = 2759688750U;
unsigned long long int var_23 = 14440752626694170476ULL;
short var_24 = (short)11608;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
