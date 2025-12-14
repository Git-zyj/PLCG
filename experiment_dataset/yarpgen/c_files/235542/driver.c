#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 259299299U;
int var_1 = -1695708319;
unsigned long long int var_2 = 11166244713958859872ULL;
unsigned long long int var_4 = 11112911703111016174ULL;
unsigned char var_8 = (unsigned char)128;
long long int var_9 = -1467613850833183629LL;
int var_10 = 2145057211;
unsigned long long int var_11 = 6966026019012559281ULL;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
signed char var_14 = (signed char)-51;
short var_15 = (short)-31355;
unsigned char var_16 = (unsigned char)126;
unsigned long long int var_17 = 2666040008848467707ULL;
long long int var_18 = -4710410964702266080LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
