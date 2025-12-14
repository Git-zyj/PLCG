#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12072;
short var_4 = (short)-11404;
unsigned char var_8 = (unsigned char)108;
unsigned long long int var_11 = 9732505679758675928ULL;
unsigned long long int var_12 = 12683643435509670259ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)126;
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
