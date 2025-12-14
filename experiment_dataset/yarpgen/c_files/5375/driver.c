#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64346;
short var_2 = (short)-13560;
long long int var_3 = 892138653039507442LL;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2457361678U;
int var_12 = -1777790981;
unsigned long long int var_13 = 14751515680851919890ULL;
signed char var_14 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
