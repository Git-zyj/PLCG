#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17321822784704111178ULL;
unsigned char var_1 = (unsigned char)241;
short var_6 = (short)24406;
unsigned short var_9 = (unsigned short)16019;
unsigned char var_10 = (unsigned char)64;
int var_13 = -589842142;
int zero = 0;
signed char var_15 = (signed char)-38;
int var_16 = -1669809022;
_Bool var_17 = (_Bool)1;
short var_18 = (short)11557;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
