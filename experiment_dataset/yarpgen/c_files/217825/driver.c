#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 555774046;
signed char var_4 = (signed char)121;
unsigned int var_6 = 3623778399U;
signed char var_8 = (signed char)-62;
int zero = 0;
unsigned char var_13 = (unsigned char)106;
unsigned short var_14 = (unsigned short)10790;
long long int var_15 = 735626399090532607LL;
int var_16 = -1071310522;
int var_17 = 156217045;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
