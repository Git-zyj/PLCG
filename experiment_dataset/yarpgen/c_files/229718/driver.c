#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3769903282U;
unsigned char var_1 = (unsigned char)11;
signed char var_2 = (signed char)-21;
unsigned long long int var_3 = 7794546054421772642ULL;
unsigned char var_4 = (unsigned char)239;
short var_6 = (short)-10073;
unsigned char var_10 = (unsigned char)13;
long long int var_11 = -7172420311754040551LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)29427;
signed char var_14 = (signed char)69;
long long int var_15 = 6515038234935802841LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
