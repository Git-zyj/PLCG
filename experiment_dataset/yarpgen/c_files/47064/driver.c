#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16024;
short var_4 = (short)-28013;
unsigned long long int var_5 = 16671118052772038196ULL;
signed char var_7 = (signed char)-4;
unsigned int var_8 = 2501180723U;
unsigned long long int var_9 = 722852167331270376ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-377;
int var_12 = 563173697;
long long int var_14 = 6119402508873769380LL;
int zero = 0;
unsigned short var_15 = (unsigned short)4199;
int var_16 = 1074644457;
signed char var_17 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
