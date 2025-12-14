#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1956915762;
short var_1 = (short)-4139;
short var_2 = (short)26756;
_Bool var_5 = (_Bool)0;
short var_9 = (short)20464;
unsigned short var_10 = (unsigned short)30275;
int zero = 0;
short var_12 = (short)108;
unsigned short var_13 = (unsigned short)23960;
short var_14 = (short)-27493;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
