#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30765;
signed char var_4 = (signed char)-115;
unsigned int var_5 = 3330957209U;
short var_8 = (short)-5219;
short var_13 = (short)30956;
int var_14 = -1107751732;
unsigned char var_15 = (unsigned char)164;
short var_16 = (short)-21248;
signed char var_17 = (signed char)102;
int zero = 0;
unsigned short var_20 = (unsigned short)25001;
signed char var_21 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
