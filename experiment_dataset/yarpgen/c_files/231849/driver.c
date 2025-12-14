#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)20;
short var_5 = (short)-24143;
unsigned char var_13 = (unsigned char)68;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
short var_19 = (short)-24768;
void init() {
}

void checksum() {
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
