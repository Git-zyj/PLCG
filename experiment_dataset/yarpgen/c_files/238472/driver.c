#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3161027148U;
unsigned int var_5 = 3017523447U;
unsigned char var_9 = (unsigned char)77;
short var_10 = (short)31760;
unsigned short var_13 = (unsigned short)11724;
short var_14 = (short)-29397;
unsigned short var_15 = (unsigned short)52124;
int zero = 0;
unsigned short var_18 = (unsigned short)54680;
short var_19 = (short)5060;
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
