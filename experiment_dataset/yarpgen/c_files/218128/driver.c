#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41648;
signed char var_2 = (signed char)89;
unsigned long long int var_3 = 1223433239736966243ULL;
long long int var_5 = -5654468209290191029LL;
short var_7 = (short)-13649;
int zero = 0;
unsigned char var_12 = (unsigned char)160;
unsigned int var_13 = 295328607U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
