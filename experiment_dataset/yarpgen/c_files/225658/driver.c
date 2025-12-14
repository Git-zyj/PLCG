#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9700315601672329172ULL;
unsigned int var_1 = 3481550710U;
unsigned int var_5 = 882882705U;
signed char var_6 = (signed char)-7;
unsigned char var_10 = (unsigned char)7;
short var_11 = (short)-16181;
short var_13 = (short)-15211;
int zero = 0;
unsigned int var_17 = 1192807681U;
unsigned char var_18 = (unsigned char)136;
long long int var_19 = 7397300525080759366LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
