#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
_Bool var_2 = (_Bool)0;
int var_5 = 1513847137;
short var_9 = (short)-3419;
unsigned long long int var_12 = 16840375877540496109ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14252341011656225890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
