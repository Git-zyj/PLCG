#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 169430561322060057ULL;
unsigned long long int var_6 = 18329821996693124705ULL;
unsigned int var_10 = 3724292144U;
long long int var_11 = 3700625766157862412LL;
unsigned short var_17 = (unsigned short)34452;
int zero = 0;
unsigned short var_18 = (unsigned short)24653;
unsigned long long int var_19 = 5354936611640854814ULL;
unsigned char var_20 = (unsigned char)143;
long long int var_21 = 3472043361206940600LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
