#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4181756899559335089LL;
unsigned long long int var_5 = 8164391338077320963ULL;
unsigned long long int var_17 = 10145116317715177757ULL;
unsigned char var_18 = (unsigned char)111;
int zero = 0;
short var_19 = (short)17803;
unsigned long long int var_20 = 13783346540716704902ULL;
short var_21 = (short)-2623;
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
