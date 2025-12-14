#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1592610581724012728LL;
long long int var_2 = 913535836386516880LL;
short var_5 = (short)27686;
unsigned char var_6 = (unsigned char)10;
short var_7 = (short)15201;
unsigned int var_8 = 1042073099U;
int var_9 = 568710073;
long long int var_10 = -9144912757711234396LL;
int zero = 0;
int var_11 = 266066434;
unsigned char var_12 = (unsigned char)153;
unsigned short var_13 = (unsigned short)63323;
void init() {
}

void checksum() {
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
