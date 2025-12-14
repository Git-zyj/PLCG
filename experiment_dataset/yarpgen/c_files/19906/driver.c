#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1874444538;
long long int var_4 = 4957959130551306648LL;
short var_8 = (short)-26621;
int var_9 = 1929415474;
int var_10 = 1779898301;
int zero = 0;
unsigned int var_12 = 3519740357U;
unsigned char var_13 = (unsigned char)152;
unsigned long long int var_14 = 3117748964158266757ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
