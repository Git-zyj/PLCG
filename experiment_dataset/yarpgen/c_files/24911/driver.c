#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
long long int var_4 = 1825497650356067569LL;
unsigned short var_7 = (unsigned short)12923;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1747931278U;
long long int var_12 = 1931987732996199384LL;
short var_13 = (short)-10558;
int var_15 = -908870822;
int zero = 0;
long long int var_16 = 4433763006618792787LL;
short var_17 = (short)-32216;
short var_18 = (short)-11086;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
