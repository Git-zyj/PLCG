#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3721804954U;
unsigned int var_3 = 1177086591U;
short var_5 = (short)-11955;
short var_7 = (short)13049;
int var_10 = -1945962242;
int var_12 = -543214076;
unsigned short var_13 = (unsigned short)19998;
unsigned int var_15 = 3379612284U;
int var_16 = 1108287359;
int zero = 0;
short var_19 = (short)-22565;
unsigned char var_20 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
