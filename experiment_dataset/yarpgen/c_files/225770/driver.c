#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23088;
int var_1 = -1429370753;
unsigned char var_2 = (unsigned char)119;
unsigned int var_3 = 2482008251U;
unsigned long long int var_4 = 10109073828201839838ULL;
unsigned long long int var_5 = 18391891298003654960ULL;
unsigned int var_6 = 1262297458U;
long long int var_9 = -6582043426193277262LL;
int zero = 0;
unsigned short var_10 = (unsigned short)1335;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1372771854U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
