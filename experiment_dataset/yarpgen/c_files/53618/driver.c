#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
unsigned long long int var_6 = 8867285583308037199ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)165;
int var_14 = -95018067;
int zero = 0;
short var_16 = (short)-29711;
int var_17 = 1086811617;
void init() {
}

void checksum() {
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
