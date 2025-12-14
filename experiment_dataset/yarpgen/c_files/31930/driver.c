#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3176307473U;
long long int var_1 = -4961233946438065417LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 13620785945702638941ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)122;
unsigned short var_19 = (unsigned short)22774;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
