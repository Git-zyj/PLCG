#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 18031865135527792822ULL;
int var_8 = -1902583356;
unsigned long long int var_10 = 14518683704027431291ULL;
unsigned short var_13 = (unsigned short)41147;
int var_16 = 1028235412;
int zero = 0;
int var_17 = -114510453;
short var_18 = (short)29053;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
