#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-88;
unsigned int var_5 = 2853253004U;
short var_8 = (short)-29744;
short var_10 = (short)-26820;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
long long int var_13 = -6398106932392283117LL;
unsigned int var_14 = 331926279U;
unsigned short var_15 = (unsigned short)29269;
long long int var_16 = 7944256354076950158LL;
signed char var_17 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
