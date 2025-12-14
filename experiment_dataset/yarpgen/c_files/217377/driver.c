#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)37;
short var_6 = (short)-11119;
unsigned short var_7 = (unsigned short)48180;
unsigned long long int var_9 = 9744863210891226292ULL;
unsigned short var_10 = (unsigned short)48400;
unsigned short var_11 = (unsigned short)40861;
short var_14 = (short)-27113;
int zero = 0;
unsigned int var_15 = 2746904350U;
unsigned long long int var_16 = 7743203682502422444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
