#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27200;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)178;
long long int var_11 = -3123784146384060403LL;
int zero = 0;
unsigned int var_16 = 2586527151U;
short var_17 = (short)25031;
int var_18 = 999204851;
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
