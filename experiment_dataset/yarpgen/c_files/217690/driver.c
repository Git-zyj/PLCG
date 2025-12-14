#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -99894324;
short var_5 = (short)-1560;
signed char var_6 = (signed char)-41;
int var_9 = 1115435767;
long long int var_11 = 8481500002321899367LL;
int var_14 = -719316108;
int zero = 0;
unsigned char var_16 = (unsigned char)119;
short var_17 = (short)-26972;
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
