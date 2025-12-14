#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 688993234017930174LL;
long long int var_7 = -7706307105712140681LL;
unsigned long long int var_9 = 18176404338188465680ULL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -5195013894867939296LL;
signed char var_14 = (signed char)120;
int zero = 0;
unsigned int var_15 = 190770159U;
unsigned char var_16 = (unsigned char)220;
void init() {
}

void checksum() {
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
