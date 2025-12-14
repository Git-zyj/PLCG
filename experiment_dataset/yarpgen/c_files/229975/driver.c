#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
unsigned char var_7 = (unsigned char)182;
unsigned char var_14 = (unsigned char)121;
int zero = 0;
short var_19 = (short)-28069;
short var_20 = (short)-7575;
long long int var_21 = 2150606277027181875LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
