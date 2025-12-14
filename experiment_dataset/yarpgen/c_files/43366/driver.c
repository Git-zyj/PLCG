#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 23989898;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)14;
unsigned int var_7 = 2059686407U;
long long int var_9 = 937570531155086734LL;
unsigned char var_10 = (unsigned char)120;
signed char var_11 = (signed char)0;
int zero = 0;
unsigned short var_13 = (unsigned short)53780;
unsigned short var_14 = (unsigned short)53628;
void init() {
}

void checksum() {
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
