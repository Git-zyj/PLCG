#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
unsigned short var_4 = (unsigned short)14762;
unsigned short var_6 = (unsigned short)24400;
unsigned short var_7 = (unsigned short)20411;
unsigned short var_8 = (unsigned short)47661;
short var_9 = (short)26723;
unsigned short var_10 = (unsigned short)27323;
unsigned short var_11 = (unsigned short)34196;
int zero = 0;
short var_12 = (short)-27864;
unsigned short var_13 = (unsigned short)30958;
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
