#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41838;
int var_1 = 1328114950;
int var_4 = 576781538;
signed char var_10 = (signed char)-30;
unsigned char var_13 = (unsigned char)182;
int zero = 0;
int var_17 = 35783887;
short var_18 = (short)876;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-1047;
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
