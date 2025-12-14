#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1425428767;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7745342645791958ULL;
unsigned int var_7 = 1623214891U;
unsigned char var_9 = (unsigned char)160;
signed char var_11 = (signed char)45;
int zero = 0;
short var_12 = (short)7601;
short var_13 = (short)-22110;
long long int var_14 = -711822023421090232LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
