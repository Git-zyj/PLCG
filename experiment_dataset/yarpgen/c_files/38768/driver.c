#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 730104735;
long long int var_7 = -6787562634209180116LL;
int var_8 = 1721846567;
unsigned char var_9 = (unsigned char)166;
long long int var_10 = 9043928737630060759LL;
int zero = 0;
int var_11 = -2008750256;
int var_12 = -253405309;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
