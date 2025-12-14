#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1612051452;
unsigned char var_2 = (unsigned char)197;
unsigned long long int var_3 = 8496134628231582226ULL;
unsigned long long int var_5 = 6040279944850300047ULL;
unsigned char var_6 = (unsigned char)25;
int zero = 0;
unsigned short var_10 = (unsigned short)7886;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
