#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -921775239;
_Bool var_3 = (_Bool)1;
int var_6 = -1592526204;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1010580339U;
short var_9 = (short)18878;
long long int var_13 = 4216997749521133690LL;
int var_14 = 629980294;
unsigned long long int var_15 = 5072801719934987450ULL;
int zero = 0;
unsigned int var_16 = 2236721427U;
unsigned long long int var_17 = 15248982803117468562ULL;
unsigned long long int var_18 = 5312357279491032808ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
