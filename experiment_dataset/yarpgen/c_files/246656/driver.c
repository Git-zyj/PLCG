#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1729827263;
short var_1 = (short)-13011;
unsigned int var_2 = 1402365932U;
unsigned long long int var_4 = 4662751707914801764ULL;
unsigned int var_5 = 1412940676U;
unsigned char var_7 = (unsigned char)252;
unsigned long long int var_8 = 519823924814473185ULL;
int zero = 0;
short var_10 = (short)-29113;
unsigned int var_11 = 492028937U;
_Bool var_12 = (_Bool)0;
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
