#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1941082188;
long long int var_2 = 7961583096814430731LL;
signed char var_3 = (signed char)-98;
int var_4 = 292964081;
long long int var_5 = 9132625440197954162LL;
long long int var_7 = -2644039279356284051LL;
int zero = 0;
short var_10 = (short)-1620;
signed char var_11 = (signed char)-72;
signed char var_12 = (signed char)-120;
unsigned char var_13 = (unsigned char)202;
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
