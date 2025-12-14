#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1221;
int var_3 = -1142862260;
unsigned int var_5 = 1944248856U;
unsigned char var_7 = (unsigned char)206;
short var_8 = (short)-3036;
int var_9 = 468672315;
unsigned char var_10 = (unsigned char)81;
int zero = 0;
unsigned int var_12 = 4188055464U;
short var_13 = (short)-10122;
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
