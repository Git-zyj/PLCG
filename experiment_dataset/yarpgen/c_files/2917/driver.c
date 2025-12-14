#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)9;
signed char var_5 = (signed char)-37;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)252;
unsigned long long int var_9 = 17462713721472336013ULL;
long long int var_11 = 2175092419596003064LL;
long long int var_13 = -482788087857428368LL;
long long int var_15 = -2088682386601020775LL;
int zero = 0;
long long int var_16 = 1013193443548899167LL;
long long int var_17 = -9063050079660094378LL;
long long int var_18 = -2047237589680261373LL;
unsigned short var_19 = (unsigned short)22237;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
