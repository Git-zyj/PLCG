#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1428;
signed char var_5 = (signed char)96;
unsigned short var_12 = (unsigned short)14585;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = 1487968289215482063LL;
long long int var_18 = -5439438900633819052LL;
void init() {
}

void checksum() {
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
