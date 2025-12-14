#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3573;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4293545413U;
_Bool var_10 = (_Bool)1;
short var_14 = (short)-2344;
int zero = 0;
long long int var_15 = -36163072982599254LL;
unsigned long long int var_16 = 13596338732497469170ULL;
long long int var_17 = 4902891576231626102LL;
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
