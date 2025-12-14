#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5977374871520022458ULL;
unsigned char var_10 = (unsigned char)28;
short var_13 = (short)-22858;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7690976501769872740ULL;
void init() {
}

void checksum() {
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
