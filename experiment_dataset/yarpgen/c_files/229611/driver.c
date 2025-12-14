#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27036;
long long int var_9 = -5348516739074853714LL;
unsigned int var_10 = 3656567491U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-12974;
long long int var_14 = -3512504876257138549LL;
unsigned char var_15 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
