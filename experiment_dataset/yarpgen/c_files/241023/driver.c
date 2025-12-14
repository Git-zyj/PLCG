#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1031444585;
_Bool var_2 = (_Bool)1;
int var_4 = -1722772271;
signed char var_10 = (signed char)-50;
_Bool var_11 = (_Bool)1;
int var_12 = -729144118;
signed char var_13 = (signed char)16;
signed char var_15 = (signed char)-92;
int zero = 0;
short var_16 = (short)-7684;
int var_17 = -1242528970;
short var_18 = (short)-13904;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
