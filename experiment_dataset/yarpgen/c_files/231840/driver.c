#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5172;
long long int var_4 = -8017822435898726657LL;
signed char var_7 = (signed char)-79;
unsigned int var_9 = 4050739666U;
int var_11 = 1664443312;
unsigned char var_12 = (unsigned char)178;
unsigned long long int var_14 = 7960356085349347237ULL;
long long int var_16 = -2628553359390964008LL;
int zero = 0;
long long int var_17 = -8326986069747587493LL;
unsigned char var_18 = (unsigned char)136;
void init() {
}

void checksum() {
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
