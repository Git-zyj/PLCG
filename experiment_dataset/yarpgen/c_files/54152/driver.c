#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4240399202U;
signed char var_2 = (signed char)-18;
unsigned char var_4 = (unsigned char)106;
short var_5 = (short)-31821;
unsigned int var_7 = 1060646337U;
unsigned short var_8 = (unsigned short)27954;
long long int var_9 = -9026988076189643075LL;
signed char var_11 = (signed char)75;
unsigned int var_15 = 2706184728U;
int zero = 0;
unsigned short var_16 = (unsigned short)59941;
signed char var_17 = (signed char)-108;
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
