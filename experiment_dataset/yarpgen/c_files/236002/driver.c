#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
int var_2 = 1410928967;
short var_4 = (short)-4106;
unsigned char var_6 = (unsigned char)252;
signed char var_7 = (signed char)84;
unsigned char var_10 = (unsigned char)111;
unsigned int var_11 = 3728303733U;
long long int var_12 = -4768003744754879315LL;
int zero = 0;
signed char var_17 = (signed char)49;
short var_18 = (short)-19156;
short var_19 = (short)-31693;
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
