#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned long long int var_1 = 12380696805577891905ULL;
unsigned char var_4 = (unsigned char)135;
short var_5 = (short)-15285;
unsigned long long int var_8 = 15174118508884081490ULL;
long long int var_9 = 414410843225042774LL;
int zero = 0;
unsigned char var_12 = (unsigned char)210;
long long int var_13 = 5990352133333584765LL;
void init() {
}

void checksum() {
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
