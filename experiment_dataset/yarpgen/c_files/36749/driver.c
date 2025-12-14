#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
unsigned char var_1 = (unsigned char)82;
unsigned short var_3 = (unsigned short)59369;
unsigned short var_4 = (unsigned short)41462;
signed char var_5 = (signed char)10;
signed char var_6 = (signed char)-93;
unsigned char var_8 = (unsigned char)188;
unsigned short var_12 = (unsigned short)24779;
int zero = 0;
long long int var_13 = -1229222856631209120LL;
unsigned short var_14 = (unsigned short)41218;
long long int var_15 = -4445607539719813218LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
