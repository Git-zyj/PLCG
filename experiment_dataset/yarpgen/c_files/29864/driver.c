#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35586;
unsigned short var_1 = (unsigned short)8766;
int var_2 = 1955038763;
unsigned short var_3 = (unsigned short)19479;
unsigned int var_5 = 1161599458U;
signed char var_6 = (signed char)-49;
short var_7 = (short)571;
unsigned short var_9 = (unsigned short)8298;
int var_10 = 148042187;
int var_11 = -1842892855;
int zero = 0;
unsigned short var_12 = (unsigned short)4588;
unsigned int var_13 = 3879842901U;
unsigned int var_14 = 1075763287U;
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
