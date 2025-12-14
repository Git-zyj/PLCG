#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2248531149984264652ULL;
short var_3 = (short)25568;
short var_4 = (short)-14191;
signed char var_6 = (signed char)-81;
unsigned short var_8 = (unsigned short)60978;
long long int var_9 = 2861090081351114882LL;
short var_10 = (short)-29822;
int zero = 0;
unsigned short var_12 = (unsigned short)18323;
short var_13 = (short)-9339;
void init() {
}

void checksum() {
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
