#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)217;
_Bool var_7 = (_Bool)0;
long long int var_9 = 7096254336345293148LL;
unsigned char var_10 = (unsigned char)190;
unsigned int var_11 = 696018340U;
signed char var_12 = (signed char)97;
unsigned int var_14 = 1891450150U;
int var_15 = 1260020807;
short var_16 = (short)-18840;
short var_17 = (short)8920;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1024593353U;
unsigned long long int var_21 = 4665235385070410849ULL;
unsigned int var_22 = 1020870636U;
signed char var_23 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
