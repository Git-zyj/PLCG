#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18700;
unsigned int var_2 = 606127150U;
int var_4 = -1207281448;
int var_5 = -1197591764;
short var_6 = (short)-16243;
short var_9 = (short)9818;
unsigned int var_13 = 1599492972U;
signed char var_14 = (signed char)109;
unsigned int var_15 = 1783894341U;
int var_17 = -1828513317;
int zero = 0;
int var_19 = 1150915122;
unsigned long long int var_20 = 513861927985849715ULL;
void init() {
}

void checksum() {
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
