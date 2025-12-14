#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
unsigned short var_6 = (unsigned short)30042;
signed char var_8 = (signed char)76;
signed char var_9 = (signed char)-74;
long long int var_11 = 1983634983535365863LL;
short var_13 = (short)-4675;
int zero = 0;
long long int var_16 = 7878089356832738160LL;
short var_17 = (short)21948;
unsigned char var_18 = (unsigned char)221;
unsigned short var_19 = (unsigned short)35303;
unsigned char var_20 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
