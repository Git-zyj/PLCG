#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 482939922U;
long long int var_4 = -699583510565205939LL;
short var_6 = (short)-25338;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)49872;
unsigned short var_12 = (unsigned short)12740;
long long int var_15 = -5850689510112455980LL;
int zero = 0;
long long int var_17 = -5559772191731870626LL;
unsigned short var_18 = (unsigned short)41492;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
