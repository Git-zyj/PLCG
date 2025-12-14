#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10521;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_8 = -276772894;
int zero = 0;
unsigned short var_15 = (unsigned short)36205;
short var_16 = (short)-27664;
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
