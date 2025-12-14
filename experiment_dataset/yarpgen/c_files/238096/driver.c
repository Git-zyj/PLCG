#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45610;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)15930;
short var_7 = (short)-14715;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 494530578U;
int zero = 0;
int var_17 = -582637122;
unsigned short var_18 = (unsigned short)44280;
int var_19 = -322246659;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
