#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26040;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)210;
short var_8 = (short)-30841;
_Bool var_10 = (_Bool)1;
int var_12 = 1107383020;
int zero = 0;
unsigned long long int var_17 = 13454872467394976651ULL;
unsigned long long int var_18 = 10337257217840840068ULL;
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
