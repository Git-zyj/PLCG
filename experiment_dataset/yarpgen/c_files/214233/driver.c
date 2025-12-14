#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)62;
unsigned long long int var_6 = 16832260478382319542ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_13 = -1423136015;
unsigned short var_14 = (unsigned short)23240;
short var_15 = (short)11240;
void init() {
}

void checksum() {
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
