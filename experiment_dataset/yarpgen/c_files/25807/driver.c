#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)119;
int var_3 = -833916685;
int var_4 = 1278314721;
int var_6 = 294652220;
int var_8 = 1081302088;
int zero = 0;
unsigned char var_11 = (unsigned char)36;
int var_12 = -1931017036;
short var_13 = (short)21882;
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
