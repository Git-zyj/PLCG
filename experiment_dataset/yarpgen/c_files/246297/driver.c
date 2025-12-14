#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14998;
int var_2 = -1364813246;
short var_4 = (short)27083;
short var_5 = (short)-16262;
unsigned long long int var_6 = 9869105128687322850ULL;
long long int var_7 = 3514687171627867823LL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)17;
int zero = 0;
unsigned char var_13 = (unsigned char)8;
signed char var_14 = (signed char)-109;
int var_15 = -1140977020;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
