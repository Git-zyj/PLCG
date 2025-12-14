#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2418359146U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)48108;
unsigned char var_6 = (unsigned char)176;
short var_7 = (short)16004;
unsigned long long int var_8 = 2508610585642177024ULL;
short var_9 = (short)13356;
int zero = 0;
unsigned char var_10 = (unsigned char)107;
unsigned char var_11 = (unsigned char)178;
int var_12 = 931039696;
int var_13 = -749091214;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
