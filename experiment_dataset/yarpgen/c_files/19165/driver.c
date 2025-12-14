#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 160321631486091747LL;
unsigned int var_3 = 1126915723U;
unsigned int var_4 = 4148669639U;
short var_14 = (short)15479;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_20 = (short)1464;
short var_21 = (short)-5916;
unsigned char var_22 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
