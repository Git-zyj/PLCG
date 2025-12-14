#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2866;
unsigned int var_3 = 2336500152U;
unsigned short var_4 = (unsigned short)41265;
unsigned int var_5 = 2702661428U;
unsigned short var_6 = (unsigned short)60427;
unsigned int var_9 = 4266018079U;
signed char var_12 = (signed char)-85;
unsigned char var_14 = (unsigned char)222;
int zero = 0;
unsigned char var_15 = (unsigned char)13;
unsigned short var_16 = (unsigned short)7094;
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
