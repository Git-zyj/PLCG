#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1198840097U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)32709;
unsigned char var_5 = (unsigned char)192;
unsigned long long int var_6 = 16369024420827258850ULL;
unsigned int var_7 = 2867351039U;
signed char var_8 = (signed char)107;
short var_9 = (short)3177;
int var_10 = -1143291373;
unsigned long long int var_11 = 820472954864146789ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)101;
signed char var_15 = (signed char)24;
short var_16 = (short)31548;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
