#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)14930;
unsigned char var_12 = (unsigned char)118;
unsigned short var_16 = (unsigned short)39054;
int zero = 0;
unsigned short var_20 = (unsigned short)59872;
unsigned int var_21 = 3919643489U;
short var_22 = (short)-26221;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
