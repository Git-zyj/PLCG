#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned char var_3 = (unsigned char)145;
unsigned long long int var_4 = 11235436874005813462ULL;
short var_5 = (short)-883;
unsigned int var_6 = 1669543472U;
unsigned int var_7 = 2849830806U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 901653261U;
unsigned long long int var_11 = 17560839001432241310ULL;
unsigned long long int var_12 = 14864432237211707205ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)83;
signed char var_14 = (signed char)106;
signed char var_15 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
