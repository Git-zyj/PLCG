#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned char var_1 = (unsigned char)23;
long long int var_3 = -7752794059567005038LL;
unsigned short var_4 = (unsigned short)48769;
long long int var_8 = 8998553513709087041LL;
unsigned char var_11 = (unsigned char)72;
long long int var_14 = 8204077144238685007LL;
int zero = 0;
unsigned long long int var_18 = 1934199177928992230ULL;
unsigned short var_19 = (unsigned short)18040;
void init() {
}

void checksum() {
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
