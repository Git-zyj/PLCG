#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62932;
unsigned int var_5 = 1077804817U;
int var_6 = 460304119;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6160918413913637477ULL;
int zero = 0;
short var_10 = (short)29012;
unsigned short var_11 = (unsigned short)17641;
unsigned long long int var_12 = 8619041668336963830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
