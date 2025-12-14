#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1620687818;
int var_5 = -1172816279;
int var_6 = 1695797186;
unsigned int var_8 = 3576906225U;
unsigned long long int var_9 = 16485250644488677303ULL;
long long int var_13 = -7129569864410435363LL;
short var_16 = (short)-16224;
long long int var_17 = -7819556832212161566LL;
int var_19 = -1022515047;
int zero = 0;
signed char var_20 = (signed char)46;
long long int var_21 = 8769427571737137299LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
