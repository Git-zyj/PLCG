#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28494;
unsigned short var_2 = (unsigned short)59803;
unsigned int var_3 = 3875022025U;
int var_4 = -394426119;
signed char var_7 = (signed char)111;
unsigned long long int var_8 = 16998683763643999063ULL;
unsigned long long int var_11 = 4152891219615152940ULL;
unsigned short var_14 = (unsigned short)17697;
unsigned char var_16 = (unsigned char)192;
int zero = 0;
unsigned short var_18 = (unsigned short)64590;
int var_19 = -99186014;
long long int var_20 = -1760100742905637337LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
