#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30869;
short var_1 = (short)31687;
signed char var_2 = (signed char)-62;
unsigned int var_4 = 3860714955U;
unsigned char var_6 = (unsigned char)69;
unsigned short var_8 = (unsigned short)45533;
int var_9 = -2128027115;
int zero = 0;
short var_10 = (short)27356;
signed char var_11 = (signed char)-103;
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
