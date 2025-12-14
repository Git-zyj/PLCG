#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22990;
unsigned short var_6 = (unsigned short)58665;
short var_7 = (short)-20929;
short var_8 = (short)-30005;
unsigned short var_9 = (unsigned short)30175;
unsigned short var_12 = (unsigned short)56881;
int zero = 0;
unsigned short var_17 = (unsigned short)11194;
unsigned short var_18 = (unsigned short)14412;
unsigned short var_19 = (unsigned short)38656;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
