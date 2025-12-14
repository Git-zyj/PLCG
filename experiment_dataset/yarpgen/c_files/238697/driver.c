#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2650646215U;
unsigned char var_1 = (unsigned char)186;
long long int var_2 = 2057614527792173977LL;
_Bool var_4 = (_Bool)1;
int var_5 = -1826471008;
unsigned long long int var_9 = 16507506869108285796ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14673038405898968036ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17897177176925134061ULL;
long long int var_14 = -7935351817752428375LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
