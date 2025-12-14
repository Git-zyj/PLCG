#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30273;
unsigned char var_1 = (unsigned char)163;
int var_7 = 1973893865;
int var_9 = 1468147608;
int var_12 = -422191100;
unsigned int var_13 = 2949058204U;
signed char var_15 = (signed char)-121;
int zero = 0;
unsigned short var_20 = (unsigned short)5412;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)4;
long long int var_23 = -1504716955759873305LL;
void init() {
}

void checksum() {
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
