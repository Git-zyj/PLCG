#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1457706544;
int zero = 0;
unsigned short var_17 = (unsigned short)21622;
unsigned char var_18 = (unsigned char)24;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)54915;
int var_21 = -681923496;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
