#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
signed char var_3 = (signed char)-67;
short var_4 = (short)16588;
unsigned int var_8 = 2166518009U;
unsigned int var_9 = 3222470247U;
short var_10 = (short)-11108;
unsigned int var_12 = 1465800036U;
unsigned int var_14 = 2513272711U;
unsigned int var_15 = 1125665220U;
short var_17 = (short)-27789;
int zero = 0;
unsigned int var_19 = 1576589123U;
unsigned int var_20 = 2863398391U;
unsigned int var_21 = 717520226U;
signed char var_22 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
