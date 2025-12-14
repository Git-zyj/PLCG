#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
int var_4 = -1922088553;
unsigned char var_5 = (unsigned char)195;
int var_8 = 610529874;
int zero = 0;
signed char var_11 = (signed char)93;
short var_12 = (short)-5819;
short var_13 = (short)-17758;
unsigned long long int var_14 = 18437894815813128803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
