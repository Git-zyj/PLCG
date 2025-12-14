#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
unsigned int var_4 = 2739237104U;
short var_5 = (short)-12528;
unsigned int var_10 = 2135532423U;
long long int var_11 = -7455191192956788366LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-7242;
void init() {
}

void checksum() {
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
