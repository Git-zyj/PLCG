#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8466307350703731872LL;
long long int var_8 = 7806014228860480128LL;
unsigned short var_10 = (unsigned short)58282;
long long int var_13 = 5159345490350381258LL;
int zero = 0;
long long int var_14 = 4271957090576646505LL;
unsigned short var_15 = (unsigned short)42691;
unsigned short var_16 = (unsigned short)39798;
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
