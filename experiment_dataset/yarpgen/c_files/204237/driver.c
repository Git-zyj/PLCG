#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50089;
signed char var_2 = (signed char)91;
long long int var_3 = 910168903781836031LL;
unsigned short var_5 = (unsigned short)13716;
unsigned long long int var_6 = 6023338844436553406ULL;
unsigned short var_10 = (unsigned short)26808;
unsigned short var_11 = (unsigned short)8698;
signed char var_12 = (signed char)54;
unsigned char var_13 = (unsigned char)133;
int zero = 0;
unsigned short var_14 = (unsigned short)19216;
signed char var_15 = (signed char)73;
unsigned long long int var_16 = 14241664949956658674ULL;
long long int var_17 = -1992059160776247191LL;
void init() {
}

void checksum() {
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
