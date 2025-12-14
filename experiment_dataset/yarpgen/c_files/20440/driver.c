#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13792059089213650163ULL;
int var_4 = 1785496018;
signed char var_8 = (signed char)-49;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-10239;
unsigned char var_15 = (unsigned char)134;
int var_16 = -1598107702;
short var_17 = (short)10114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
