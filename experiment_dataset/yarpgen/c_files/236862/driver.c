#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -453650217;
int var_4 = 1133251912;
int var_8 = -774921181;
_Bool var_9 = (_Bool)1;
long long int var_13 = 6636378848716209911LL;
short var_14 = (short)-13268;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-3359;
int zero = 0;
unsigned long long int var_17 = 7934662567263722047ULL;
unsigned int var_18 = 1333055015U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
