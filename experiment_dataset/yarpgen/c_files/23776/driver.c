#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2036096587;
signed char var_2 = (signed char)61;
signed char var_3 = (signed char)-111;
unsigned char var_4 = (unsigned char)238;
long long int var_6 = -8315073836610276326LL;
unsigned long long int var_9 = 9549717390310067794ULL;
unsigned int var_11 = 3985593631U;
unsigned short var_13 = (unsigned short)9092;
signed char var_14 = (signed char)-89;
int zero = 0;
int var_15 = -1615158189;
int var_16 = 1679845884;
signed char var_17 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
