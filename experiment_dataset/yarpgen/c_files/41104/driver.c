#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 5358818636824945016ULL;
unsigned char var_6 = (unsigned char)224;
unsigned char var_7 = (unsigned char)38;
signed char var_8 = (signed char)-95;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)-29;
int zero = 0;
unsigned long long int var_16 = 9134068318108226993ULL;
long long int var_17 = 5499260597806517308LL;
unsigned char var_18 = (unsigned char)55;
unsigned short var_19 = (unsigned short)44372;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
