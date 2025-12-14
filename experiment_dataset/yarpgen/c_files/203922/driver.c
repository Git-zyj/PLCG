#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned int var_1 = 1721796592U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)114;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
int var_13 = 1474462140;
int var_14 = 1266534583;
unsigned long long int var_15 = 18030876192573314120ULL;
signed char var_16 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
