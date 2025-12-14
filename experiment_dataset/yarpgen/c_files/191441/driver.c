#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4130932256431241419ULL;
_Bool var_11 = (_Bool)0;
long long int var_15 = 807999994882905217LL;
int zero = 0;
long long int var_17 = 5057084221206382758LL;
signed char var_18 = (signed char)1;
unsigned short var_19 = (unsigned short)2237;
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
