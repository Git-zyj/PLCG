#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51803;
unsigned int var_5 = 3886785915U;
signed char var_9 = (signed char)37;
int var_11 = -1057167410;
long long int var_12 = -4506807161036288878LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1650744611U;
signed char var_15 = (signed char)83;
unsigned char var_16 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
