#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17218275834261840929ULL;
unsigned char var_2 = (unsigned char)101;
unsigned long long int var_7 = 92737717142404638ULL;
unsigned char var_8 = (unsigned char)128;
unsigned int var_12 = 3608560083U;
long long int var_14 = 8371376074028501870LL;
int var_16 = 1139057983;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2309573001673014458ULL;
void init() {
}

void checksum() {
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
