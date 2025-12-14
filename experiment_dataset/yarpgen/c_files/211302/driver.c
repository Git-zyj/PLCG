#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24125;
short var_7 = (short)27571;
unsigned short var_11 = (unsigned short)23725;
unsigned short var_14 = (unsigned short)9562;
int zero = 0;
signed char var_19 = (signed char)111;
long long int var_20 = -2246609241568834824LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
