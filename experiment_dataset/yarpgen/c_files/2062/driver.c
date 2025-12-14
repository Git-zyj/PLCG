#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16147;
_Bool var_1 = (_Bool)0;
int var_3 = 1708140085;
long long int var_4 = 5520572380639284780LL;
short var_7 = (short)16550;
short var_8 = (short)-11545;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4376587679139447153LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
