#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61234;
int var_3 = -617139371;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 202659758U;
short var_13 = (short)-26199;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6592229218733076429ULL;
void init() {
}

void checksum() {
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
