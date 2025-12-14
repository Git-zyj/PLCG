#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 517924346778754368LL;
_Bool var_5 = (_Bool)0;
int var_7 = 384296441;
unsigned short var_8 = (unsigned short)24667;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-29;
short var_17 = (short)10759;
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
