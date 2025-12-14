#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2102304767U;
unsigned int var_1 = 590142586U;
long long int var_3 = 4369349920889269141LL;
unsigned long long int var_4 = 11342808725837780145ULL;
unsigned long long int var_5 = 7655318847593032362ULL;
short var_7 = (short)-638;
unsigned short var_8 = (unsigned short)34750;
long long int var_9 = 8548473333779112126LL;
int zero = 0;
unsigned int var_10 = 2464743653U;
long long int var_11 = -8056302058465094693LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
