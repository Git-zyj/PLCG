#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2341212584727256436LL;
unsigned short var_10 = (unsigned short)20893;
long long int var_13 = 4847574184793739079LL;
int zero = 0;
long long int var_14 = -6746814887771891622LL;
unsigned short var_15 = (unsigned short)1771;
long long int var_16 = 3561567303713479464LL;
long long int var_17 = 2955445001559842546LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
