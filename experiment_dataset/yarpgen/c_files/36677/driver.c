#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 383563425U;
unsigned int var_3 = 1077404152U;
unsigned long long int var_7 = 6652693455677562824ULL;
short var_13 = (short)-20104;
int var_17 = 191871765;
int zero = 0;
unsigned long long int var_20 = 8082675349470305972ULL;
long long int var_21 = 1616642783332133774LL;
void init() {
}

void checksum() {
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
