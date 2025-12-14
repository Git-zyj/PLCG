#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_4 = (unsigned short)38673;
unsigned int var_5 = 223461598U;
long long int var_8 = -3044017436132536124LL;
int zero = 0;
unsigned int var_13 = 2562466315U;
signed char var_14 = (signed char)-60;
short var_15 = (short)-9665;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
