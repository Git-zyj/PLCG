#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20656;
unsigned char var_1 = (unsigned char)208;
unsigned char var_4 = (unsigned char)47;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)94;
int zero = 0;
unsigned char var_10 = (unsigned char)92;
unsigned short var_11 = (unsigned short)54079;
long long int var_12 = 1014754445979411084LL;
signed char var_13 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
