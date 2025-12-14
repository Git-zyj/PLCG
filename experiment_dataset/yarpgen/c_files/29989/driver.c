#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned short var_4 = (unsigned short)20118;
unsigned short var_10 = (unsigned short)22703;
unsigned short var_12 = (unsigned short)26738;
unsigned char var_13 = (unsigned char)18;
unsigned short var_15 = (unsigned short)4861;
int zero = 0;
unsigned short var_17 = (unsigned short)5898;
unsigned char var_18 = (unsigned char)32;
unsigned char var_19 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
