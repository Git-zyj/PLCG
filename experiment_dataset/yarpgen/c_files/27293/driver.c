#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
unsigned long long int var_3 = 5255118181224501911ULL;
unsigned int var_4 = 2157252430U;
unsigned long long int var_6 = 2786555844680009092ULL;
long long int var_8 = 6518789808114648221LL;
unsigned char var_9 = (unsigned char)186;
short var_10 = (short)27135;
unsigned long long int var_12 = 18135264965889621470ULL;
unsigned long long int var_14 = 15534171663708008692ULL;
int zero = 0;
unsigned int var_15 = 1485045369U;
unsigned short var_16 = (unsigned short)2733;
unsigned int var_17 = 2015213216U;
int var_18 = 1117362092;
unsigned short var_19 = (unsigned short)15265;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
