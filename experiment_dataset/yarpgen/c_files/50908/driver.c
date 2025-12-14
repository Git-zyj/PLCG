#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1668425620;
short var_1 = (short)334;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)17;
unsigned char var_5 = (unsigned char)139;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_12 = (short)-30576;
unsigned short var_13 = (unsigned short)9883;
signed char var_14 = (signed char)32;
void init() {
}

void checksum() {
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
