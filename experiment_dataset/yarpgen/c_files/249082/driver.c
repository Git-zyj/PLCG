#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44989;
_Bool var_6 = (_Bool)1;
long long int var_8 = 757518437466458728LL;
long long int var_11 = 5862875440371934898LL;
int zero = 0;
unsigned short var_17 = (unsigned short)46441;
unsigned int var_18 = 1561628073U;
_Bool var_19 = (_Bool)0;
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
