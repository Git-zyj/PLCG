#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7358331209255385213LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_12 = -2922121859659276700LL;
unsigned short var_13 = (unsigned short)16773;
void init() {
}

void checksum() {
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
