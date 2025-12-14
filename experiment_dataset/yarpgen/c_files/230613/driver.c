#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
long long int var_1 = 8686494717424340506LL;
short var_2 = (short)15816;
int var_4 = 1462199743;
short var_7 = (short)-10639;
long long int var_8 = 2852542185799352716LL;
unsigned char var_9 = (unsigned char)183;
signed char var_11 = (signed char)94;
unsigned int var_12 = 3343377283U;
int zero = 0;
signed char var_13 = (signed char)30;
short var_14 = (short)-14655;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
