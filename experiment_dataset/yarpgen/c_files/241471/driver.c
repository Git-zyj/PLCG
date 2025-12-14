#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1433905760U;
unsigned int var_1 = 1961432188U;
unsigned int var_2 = 2855921582U;
unsigned short var_3 = (unsigned short)61562;
signed char var_5 = (signed char)17;
unsigned long long int var_6 = 4359509105644754717ULL;
short var_7 = (short)25964;
int var_8 = -824771746;
signed char var_9 = (signed char)-82;
unsigned short var_10 = (unsigned short)29765;
unsigned int var_11 = 736182404U;
int var_12 = 5696910;
int zero = 0;
signed char var_13 = (signed char)60;
signed char var_14 = (signed char)-64;
int var_15 = 1778617922;
unsigned char var_16 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
