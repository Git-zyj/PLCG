#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)90;
unsigned int var_8 = 192243822U;
long long int var_10 = 6353046818304042719LL;
long long int var_13 = -6984066085909809759LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3216687546U;
short var_17 = (short)18508;
void init() {
}

void checksum() {
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
