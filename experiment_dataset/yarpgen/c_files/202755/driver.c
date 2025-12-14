#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
long long int var_2 = 853434321272622781LL;
unsigned char var_3 = (unsigned char)133;
short var_4 = (short)-10085;
short var_7 = (short)13835;
int zero = 0;
short var_10 = (short)-22058;
short var_11 = (short)-30665;
long long int var_12 = -2259263153901955860LL;
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
