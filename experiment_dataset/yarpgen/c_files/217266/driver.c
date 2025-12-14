#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1924178521;
int var_1 = 300038111;
unsigned short var_6 = (unsigned short)23959;
int var_9 = -73868673;
int var_11 = 1218256885;
unsigned char var_12 = (unsigned char)223;
int zero = 0;
int var_15 = -2035957601;
int var_16 = -1218817445;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
