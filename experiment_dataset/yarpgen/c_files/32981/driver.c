#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22856;
unsigned char var_9 = (unsigned char)26;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 6511557267991263360LL;
short var_12 = (short)-6549;
short var_13 = (short)-18381;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
