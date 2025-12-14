#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38297;
short var_2 = (short)22667;
unsigned short var_4 = (unsigned short)8155;
short var_7 = (short)18407;
short var_9 = (short)11581;
unsigned short var_11 = (unsigned short)42766;
int zero = 0;
unsigned short var_12 = (unsigned short)30643;
short var_13 = (short)-32753;
short var_14 = (short)19595;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
