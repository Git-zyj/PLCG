#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10712701567368535861ULL;
short var_2 = (short)9695;
unsigned long long int var_4 = 9219893672203848038ULL;
unsigned long long int var_5 = 10861365158345633867ULL;
long long int var_7 = -2340588790604341338LL;
unsigned int var_10 = 1095875879U;
int zero = 0;
int var_13 = -841971835;
long long int var_14 = -7926549647053957198LL;
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
