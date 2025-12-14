#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -352970016;
long long int var_4 = -3044820543339528628LL;
unsigned int var_5 = 773175449U;
unsigned int var_6 = 4125075296U;
signed char var_9 = (signed char)-79;
int zero = 0;
short var_10 = (short)6774;
int var_11 = -1310835602;
unsigned char var_12 = (unsigned char)150;
short var_13 = (short)17982;
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
