#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4933446506015021670LL;
long long int var_1 = -5507417256668269369LL;
long long int var_2 = 1703226905948164858LL;
unsigned long long int var_3 = 7192817917384143725ULL;
long long int var_4 = 5800383251752375364LL;
unsigned char var_9 = (unsigned char)179;
unsigned long long int var_11 = 11580079804383014641ULL;
unsigned char var_12 = (unsigned char)11;
int zero = 0;
int var_13 = -1003843137;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-2994;
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
