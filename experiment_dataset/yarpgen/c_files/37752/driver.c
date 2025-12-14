#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned char var_2 = (unsigned char)115;
unsigned int var_3 = 2813540108U;
_Bool var_6 = (_Bool)0;
int var_8 = -483244582;
unsigned char var_9 = (unsigned char)211;
signed char var_15 = (signed char)-54;
int zero = 0;
unsigned int var_16 = 107506373U;
int var_17 = 1032524743;
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
