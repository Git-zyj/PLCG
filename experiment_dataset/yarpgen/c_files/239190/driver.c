#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48055;
unsigned int var_4 = 179844498U;
unsigned int var_5 = 314364367U;
unsigned int var_6 = 4003370665U;
unsigned short var_7 = (unsigned short)38834;
unsigned int var_8 = 3508972714U;
unsigned short var_9 = (unsigned short)55833;
int zero = 0;
signed char var_12 = (signed char)15;
unsigned char var_13 = (unsigned char)18;
unsigned short var_14 = (unsigned short)40991;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
