#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63625;
signed char var_1 = (signed char)52;
unsigned char var_2 = (unsigned char)183;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)216;
unsigned short var_10 = (unsigned short)4949;
signed char var_12 = (signed char)111;
unsigned short var_13 = (unsigned short)5781;
signed char var_15 = (signed char)114;
long long int var_16 = 932074747315106249LL;
int zero = 0;
unsigned short var_17 = (unsigned short)22989;
unsigned char var_18 = (unsigned char)145;
unsigned int var_19 = 2347248367U;
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
