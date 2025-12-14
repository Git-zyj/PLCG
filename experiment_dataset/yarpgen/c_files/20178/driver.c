#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54768;
signed char var_2 = (signed char)-27;
short var_3 = (short)-11350;
int var_4 = 765502407;
int var_6 = 1863548107;
int var_7 = 878985375;
int zero = 0;
unsigned int var_10 = 999950136U;
short var_11 = (short)18382;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
