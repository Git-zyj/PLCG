#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6984;
long long int var_5 = 4102906022839152630LL;
long long int var_7 = -3576044177226423280LL;
unsigned long long int var_8 = 13128865603725122451ULL;
unsigned long long int var_9 = 13764063195028516735ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)63028;
unsigned char var_11 = (unsigned char)227;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
