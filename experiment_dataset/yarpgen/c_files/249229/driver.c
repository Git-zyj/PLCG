#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30014;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)18266;
int zero = 0;
unsigned long long int var_18 = 15174931541718620833ULL;
short var_19 = (short)-15353;
signed char var_20 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
