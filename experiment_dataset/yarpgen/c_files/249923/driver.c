#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 7047063225555655032LL;
signed char var_3 = (signed char)78;
int var_4 = -998887743;
unsigned long long int var_7 = 4882851801392091230ULL;
_Bool var_9 = (_Bool)1;
short var_12 = (short)11876;
int var_13 = 2001992721;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)166;
unsigned long long int var_17 = 13515186989417181594ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)167;
unsigned char var_20 = (unsigned char)17;
unsigned int var_21 = 3089959621U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
