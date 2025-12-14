#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30142;
long long int var_7 = -2441378360665463215LL;
int var_8 = 463599980;
signed char var_10 = (signed char)-77;
long long int var_12 = 4084938179362720561LL;
int zero = 0;
short var_13 = (short)1168;
int var_14 = 1974622374;
short var_15 = (short)3618;
int var_16 = -806680666;
unsigned char var_17 = (unsigned char)125;
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
