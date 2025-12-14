#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8897;
unsigned short var_12 = (unsigned short)16130;
int zero = 0;
unsigned long long int var_19 = 7519306355587970019ULL;
unsigned short var_20 = (unsigned short)35332;
int var_21 = 725180579;
unsigned short var_22 = (unsigned short)61937;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
