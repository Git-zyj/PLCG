#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24940;
unsigned char var_2 = (unsigned char)126;
signed char var_3 = (signed char)-43;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-63;
unsigned long long int var_13 = 9386360151383880627ULL;
int zero = 0;
signed char var_14 = (signed char)-70;
short var_15 = (short)-21114;
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
