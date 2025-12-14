#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)66;
short var_5 = (short)25400;
unsigned short var_6 = (unsigned short)44014;
unsigned long long int var_7 = 898542061189670716ULL;
int zero = 0;
signed char var_12 = (signed char)-54;
unsigned char var_13 = (unsigned char)128;
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
