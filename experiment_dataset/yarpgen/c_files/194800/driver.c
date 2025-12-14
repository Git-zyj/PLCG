#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3482;
short var_4 = (short)18615;
short var_5 = (short)-14051;
short var_8 = (short)-15859;
short var_10 = (short)-17642;
short var_11 = (short)-4202;
short var_13 = (short)32190;
int zero = 0;
short var_19 = (short)-10569;
short var_20 = (short)20291;
short var_21 = (short)7820;
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
