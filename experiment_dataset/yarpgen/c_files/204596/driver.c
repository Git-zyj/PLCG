#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 864504631U;
signed char var_1 = (signed char)77;
unsigned char var_5 = (unsigned char)115;
unsigned long long int var_6 = 10793000936821929648ULL;
short var_8 = (short)-23838;
long long int var_9 = 5573059595912913667LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)25735;
unsigned short var_12 = (unsigned short)7563;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
