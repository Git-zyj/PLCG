#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11155520381330296850ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)42592;
unsigned char var_11 = (unsigned char)232;
int zero = 0;
unsigned long long int var_17 = 10138986199795613614ULL;
int var_18 = -117708821;
unsigned long long int var_19 = 12298783734533786267ULL;
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
