#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13699403156454930136ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 15765010332991857698ULL;
unsigned short var_15 = (unsigned short)53243;
unsigned int var_16 = 510129381U;
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
