#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
unsigned short var_4 = (unsigned short)47283;
unsigned short var_5 = (unsigned short)45649;
_Bool var_10 = (_Bool)1;
int var_11 = -91949205;
unsigned char var_12 = (unsigned char)193;
short var_16 = (short)5092;
int zero = 0;
short var_17 = (short)-12220;
unsigned long long int var_18 = 11387959152785808793ULL;
unsigned short var_19 = (unsigned short)31029;
short var_20 = (short)-30240;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
