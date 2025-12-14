#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1564946544;
unsigned int var_7 = 2125548373U;
int var_8 = 1256042311;
int var_9 = 1026071003;
int zero = 0;
short var_10 = (short)-26084;
unsigned char var_11 = (unsigned char)138;
int var_12 = -1327330224;
unsigned char var_13 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
