#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
short var_1 = (short)4073;
signed char var_2 = (signed char)98;
long long int var_3 = -1207339689358521329LL;
unsigned long long int var_4 = 8409695976568845705ULL;
_Bool var_7 = (_Bool)1;
long long int var_10 = -6126788968188526538LL;
unsigned char var_13 = (unsigned char)102;
signed char var_14 = (signed char)-84;
signed char var_15 = (signed char)59;
int zero = 0;
unsigned long long int var_16 = 17598737814540023062ULL;
unsigned char var_17 = (unsigned char)160;
signed char var_18 = (signed char)103;
signed char var_19 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
