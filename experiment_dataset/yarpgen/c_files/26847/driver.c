#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1063386636U;
unsigned short var_7 = (unsigned short)24841;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)13273;
unsigned long long int var_14 = 18325595292648568279ULL;
int zero = 0;
unsigned long long int var_16 = 3461713100084425976ULL;
unsigned int var_17 = 2185523855U;
short var_18 = (short)-26572;
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
