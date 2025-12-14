#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1060775617;
_Bool var_10 = (_Bool)1;
unsigned char var_16 = (unsigned char)116;
int zero = 0;
long long int var_17 = -139128943854189087LL;
unsigned short var_18 = (unsigned short)61617;
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
