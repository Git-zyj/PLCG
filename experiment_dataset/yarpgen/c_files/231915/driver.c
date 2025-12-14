#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2049073928189065349ULL;
unsigned short var_2 = (unsigned short)49661;
unsigned char var_3 = (unsigned char)59;
unsigned long long int var_4 = 3870680469434730519ULL;
int var_5 = -1735736602;
unsigned long long int var_7 = 14589753783969117338ULL;
unsigned long long int var_8 = 4614757657386289941ULL;
signed char var_9 = (signed char)8;
signed char var_10 = (signed char)97;
unsigned long long int var_11 = 4169161427364281084ULL;
short var_15 = (short)-6246;
int zero = 0;
short var_17 = (short)-9008;
unsigned char var_18 = (unsigned char)169;
long long int var_19 = -751606788712219409LL;
long long int var_20 = -4436704906080039198LL;
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
