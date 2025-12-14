#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned short var_2 = (unsigned short)38521;
unsigned char var_3 = (unsigned char)81;
signed char var_4 = (signed char)(-127 - 1);
unsigned char var_5 = (unsigned char)155;
unsigned short var_9 = (unsigned short)31553;
short var_10 = (short)24713;
unsigned int var_14 = 628833088U;
int zero = 0;
signed char var_16 = (signed char)-126;
unsigned long long int var_17 = 5777931318502947844ULL;
signed char var_18 = (signed char)66;
signed char var_19 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
