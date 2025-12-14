#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49255;
unsigned short var_3 = (unsigned short)18039;
unsigned char var_5 = (unsigned char)164;
short var_10 = (short)-26413;
int zero = 0;
signed char var_12 = (signed char)-57;
signed char var_13 = (signed char)90;
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
