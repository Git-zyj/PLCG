#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)457;
unsigned short var_3 = (unsigned short)27758;
unsigned short var_4 = (unsigned short)64890;
unsigned short var_5 = (unsigned short)8809;
unsigned short var_6 = (unsigned short)61202;
unsigned short var_7 = (unsigned short)4700;
unsigned short var_9 = (unsigned short)47053;
int zero = 0;
unsigned short var_10 = (unsigned short)41253;
unsigned short var_11 = (unsigned short)3224;
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
