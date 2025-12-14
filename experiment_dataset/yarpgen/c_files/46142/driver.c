#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1107406510760046766ULL;
unsigned short var_2 = (unsigned short)26702;
short var_4 = (short)14968;
unsigned char var_11 = (unsigned char)84;
unsigned int var_15 = 2818412743U;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)-13496;
long long int var_19 = -3131402250456824333LL;
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
