#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27340;
long long int var_1 = 1792267751403002092LL;
short var_2 = (short)21021;
unsigned long long int var_4 = 13009214906120092311ULL;
unsigned int var_7 = 3372993736U;
unsigned short var_8 = (unsigned short)29198;
unsigned long long int var_10 = 13715985473701624698ULL;
long long int var_11 = 693603272240205042LL;
short var_12 = (short)7647;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)7482;
unsigned int var_17 = 851629131U;
signed char var_18 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
