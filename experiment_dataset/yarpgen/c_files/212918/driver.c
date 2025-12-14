#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16556;
int var_2 = -1858077882;
unsigned long long int var_6 = 469673030266239904ULL;
int var_10 = 559954285;
int var_13 = -1935613490;
signed char var_14 = (signed char)111;
int zero = 0;
int var_18 = -1071460126;
unsigned short var_19 = (unsigned short)34907;
short var_20 = (short)-31805;
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
