#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16913392831806859891ULL;
unsigned short var_5 = (unsigned short)47466;
short var_6 = (short)-14371;
int var_7 = 406548102;
unsigned long long int var_11 = 698288097714314183ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)46183;
unsigned char var_13 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
