#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5484;
unsigned int var_5 = 517973062U;
long long int var_6 = 6873360330759680473LL;
short var_7 = (short)-28882;
long long int var_15 = 2475111251811599741LL;
int zero = 0;
unsigned short var_16 = (unsigned short)9780;
long long int var_17 = 2195828503041504735LL;
signed char var_18 = (signed char)-127;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
