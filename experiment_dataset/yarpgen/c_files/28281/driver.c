#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 752361172232190034ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1976622913U;
long long int var_12 = 3227090221491735007LL;
signed char var_13 = (signed char)16;
unsigned char var_14 = (unsigned char)198;
int zero = 0;
long long int var_15 = -1095136760722653211LL;
unsigned char var_16 = (unsigned char)106;
long long int var_17 = 8417257159901923151LL;
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
