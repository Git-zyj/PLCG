#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2117047173;
unsigned char var_4 = (unsigned char)79;
long long int var_6 = -3326969480261738024LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = 3257909181011391894LL;
unsigned long long int var_11 = 9958140419063420546ULL;
short var_12 = (short)18247;
long long int var_15 = -977169878587956569LL;
int zero = 0;
short var_16 = (short)-12834;
unsigned long long int var_17 = 5930089714782341947ULL;
unsigned char var_18 = (unsigned char)222;
long long int var_19 = -2179403167201667277LL;
long long int var_20 = 9182713710733365934LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
