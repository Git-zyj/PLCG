#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12468976368874242216ULL;
unsigned long long int var_3 = 8929310380787233647ULL;
unsigned int var_7 = 391443108U;
_Bool var_10 = (_Bool)1;
short var_13 = (short)8093;
int zero = 0;
unsigned long long int var_14 = 17857112860725006123ULL;
short var_15 = (short)11225;
unsigned long long int var_16 = 7199132546341577759ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
