#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -276264817738953495LL;
unsigned long long int var_7 = 1089531184952724686ULL;
short var_14 = (short)-27724;
unsigned char var_17 = (unsigned char)106;
int zero = 0;
short var_20 = (short)-15181;
unsigned int var_21 = 1805073228U;
unsigned short var_22 = (unsigned short)18891;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
