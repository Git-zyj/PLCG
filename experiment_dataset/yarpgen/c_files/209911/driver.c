#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1714376835;
unsigned long long int var_1 = 1294047822644341677ULL;
short var_3 = (short)-12495;
short var_4 = (short)-23309;
signed char var_6 = (signed char)110;
signed char var_7 = (signed char)53;
unsigned char var_10 = (unsigned char)201;
int zero = 0;
signed char var_18 = (signed char)-69;
short var_19 = (short)5740;
void init() {
}

void checksum() {
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
