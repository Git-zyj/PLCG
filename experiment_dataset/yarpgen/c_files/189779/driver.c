#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16636040677114208410ULL;
unsigned char var_8 = (unsigned char)241;
unsigned short var_11 = (unsigned short)21477;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3995434014955090903LL;
short var_18 = (short)-16420;
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
