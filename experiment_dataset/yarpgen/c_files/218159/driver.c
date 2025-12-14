#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20847;
unsigned long long int var_5 = 14706418204437757545ULL;
unsigned short var_6 = (unsigned short)9647;
int var_8 = -1409572319;
int var_12 = -1200889982;
unsigned int var_13 = 1353285848U;
short var_14 = (short)28319;
unsigned long long int var_15 = 13092643989473995662ULL;
int zero = 0;
unsigned int var_16 = 3505188177U;
int var_17 = -1591116365;
long long int var_18 = 8255998810426176146LL;
signed char var_19 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
