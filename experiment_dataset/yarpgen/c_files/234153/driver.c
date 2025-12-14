#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
long long int var_1 = 3881508117833866792LL;
int var_2 = -89508603;
long long int var_6 = 4284605503863063130LL;
short var_7 = (short)8266;
short var_8 = (short)12861;
int zero = 0;
int var_11 = 1565920098;
short var_12 = (short)26755;
short var_13 = (short)25954;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
