#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27066;
unsigned long long int var_6 = 16846920358589809131ULL;
long long int var_12 = 1966074741845965359LL;
int zero = 0;
signed char var_16 = (signed char)65;
unsigned int var_17 = 3429651167U;
short var_18 = (short)-23756;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
