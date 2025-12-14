#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31341;
short var_5 = (short)-1220;
int var_7 = -1010562178;
unsigned char var_11 = (unsigned char)255;
int var_17 = -1238835929;
int zero = 0;
int var_18 = 1406177472;
_Bool var_19 = (_Bool)0;
short var_20 = (short)21182;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
