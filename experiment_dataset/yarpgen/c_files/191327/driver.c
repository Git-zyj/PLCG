#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 872276894U;
long long int var_2 = -1440088976680390721LL;
unsigned char var_3 = (unsigned char)104;
unsigned int var_8 = 3195702147U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)125;
signed char var_21 = (signed char)25;
unsigned int var_22 = 3715013135U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
