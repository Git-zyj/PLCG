#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
_Bool var_3 = (_Bool)0;
long long int var_5 = -7729663856729485210LL;
unsigned char var_8 = (unsigned char)9;
unsigned short var_9 = (unsigned short)17332;
short var_11 = (short)-29903;
short var_13 = (short)16564;
int zero = 0;
signed char var_14 = (signed char)-17;
long long int var_15 = 5222245831776461297LL;
unsigned short var_16 = (unsigned short)63740;
unsigned int var_17 = 1551890424U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
