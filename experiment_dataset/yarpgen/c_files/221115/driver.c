#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)194;
unsigned char var_4 = (unsigned char)180;
unsigned char var_5 = (unsigned char)51;
short var_6 = (short)-4855;
unsigned int var_8 = 3909863367U;
unsigned char var_11 = (unsigned char)148;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
unsigned char var_19 = (unsigned char)229;
short var_20 = (short)19068;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
