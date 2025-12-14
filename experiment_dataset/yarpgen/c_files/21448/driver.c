#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42261;
unsigned short var_4 = (unsigned short)54334;
int var_5 = 345474866;
short var_9 = (short)-3331;
unsigned short var_14 = (unsigned short)49707;
int zero = 0;
unsigned char var_16 = (unsigned char)161;
signed char var_17 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
