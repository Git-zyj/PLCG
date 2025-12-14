#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15902026629329037591ULL;
int var_5 = 1564486011;
unsigned long long int var_8 = 12697028907906328046ULL;
int var_9 = -1702169133;
int var_11 = 1361899938;
int var_12 = -1584792455;
signed char var_13 = (signed char)77;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-70;
int var_18 = -1655919986;
int var_19 = 1277021935;
int var_20 = -1894211596;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
