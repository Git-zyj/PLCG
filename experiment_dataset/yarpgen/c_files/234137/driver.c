#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 6100622108270972056ULL;
unsigned char var_5 = (unsigned char)245;
_Bool var_6 = (_Bool)1;
short var_7 = (short)23162;
long long int var_8 = 5473081959625793590LL;
unsigned char var_9 = (unsigned char)229;
short var_10 = (short)-8828;
short var_11 = (short)10231;
long long int var_12 = -4072520507647071848LL;
int zero = 0;
unsigned long long int var_13 = 1404373987682264023ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4020457506U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
