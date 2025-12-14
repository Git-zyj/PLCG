#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7302457721403890782LL;
unsigned short var_2 = (unsigned short)58615;
short var_11 = (short)-30325;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)25845;
short var_19 = (short)-10976;
void init() {
}

void checksum() {
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
