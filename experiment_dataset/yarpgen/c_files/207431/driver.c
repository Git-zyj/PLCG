#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27422;
int var_2 = 132714471;
short var_4 = (short)20141;
short var_5 = (short)8980;
short var_8 = (short)9853;
unsigned int var_9 = 2769878086U;
int zero = 0;
short var_10 = (short)-22843;
signed char var_11 = (signed char)-27;
signed char var_12 = (signed char)90;
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
