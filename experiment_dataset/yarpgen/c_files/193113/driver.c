#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5198313247574490754ULL;
unsigned long long int var_3 = 624079377762162822ULL;
signed char var_4 = (signed char)-121;
unsigned short var_8 = (unsigned short)19260;
unsigned short var_11 = (unsigned short)64504;
unsigned int var_12 = 2413847865U;
long long int var_13 = -4943561781973922840LL;
int zero = 0;
unsigned char var_14 = (unsigned char)201;
unsigned long long int var_15 = 1227277610929755167ULL;
signed char var_16 = (signed char)-15;
void init() {
}

void checksum() {
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
