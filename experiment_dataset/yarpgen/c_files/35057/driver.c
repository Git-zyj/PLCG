#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3986735650U;
short var_1 = (short)-9828;
unsigned short var_2 = (unsigned short)59333;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-15465;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
int var_17 = 372951862;
int var_18 = 107044198;
unsigned long long int var_19 = 270799514853855380ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
