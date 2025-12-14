#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31372;
unsigned short var_5 = (unsigned short)58192;
int var_6 = -1334084642;
short var_7 = (short)-28440;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14713945978360939079ULL;
unsigned char var_12 = (unsigned char)102;
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
