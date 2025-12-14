#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 24234464;
int var_1 = -1631006432;
long long int var_2 = 5528733610216576769LL;
int var_5 = 1763159139;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = 974872057;
int zero = 0;
long long int var_10 = 1847672327696929503LL;
unsigned char var_11 = (unsigned char)233;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
