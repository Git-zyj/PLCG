#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)118;
int var_3 = -537169944;
unsigned long long int var_4 = 8816606158542243641ULL;
signed char var_7 = (signed char)55;
signed char var_8 = (signed char)28;
unsigned short var_9 = (unsigned short)45226;
int var_11 = -1481274504;
unsigned long long int var_15 = 3349956563665089432ULL;
int zero = 0;
signed char var_17 = (signed char)-18;
short var_18 = (short)-13328;
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
