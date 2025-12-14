#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3996344980932596783LL;
unsigned short var_3 = (unsigned short)45296;
signed char var_8 = (signed char)-80;
long long int var_11 = 8951127204581930759LL;
int var_15 = -1647940333;
short var_17 = (short)4248;
int zero = 0;
unsigned char var_18 = (unsigned char)248;
signed char var_19 = (signed char)70;
unsigned long long int var_20 = 9397328069752437126ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
