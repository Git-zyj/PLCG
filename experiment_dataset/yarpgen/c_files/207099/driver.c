#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13135013139486949249ULL;
unsigned short var_2 = (unsigned short)13705;
unsigned short var_3 = (unsigned short)41273;
int var_6 = 33210025;
int var_7 = -121349231;
unsigned int var_9 = 1900940302U;
signed char var_12 = (signed char)-12;
unsigned long long int var_15 = 1784018489496751377ULL;
int zero = 0;
signed char var_16 = (signed char)91;
short var_17 = (short)-27813;
short var_18 = (short)-18215;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
