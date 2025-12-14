#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
signed char var_2 = (signed char)49;
long long int var_3 = 3153154043246176672LL;
unsigned short var_5 = (unsigned short)51280;
unsigned int var_8 = 3166474242U;
unsigned short var_9 = (unsigned short)37619;
unsigned int var_10 = 3401267413U;
int zero = 0;
unsigned int var_13 = 2631055902U;
unsigned short var_14 = (unsigned short)61428;
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
