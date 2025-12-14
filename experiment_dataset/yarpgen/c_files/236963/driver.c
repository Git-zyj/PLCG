#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 733209547;
int var_1 = 1967269349;
unsigned int var_3 = 3860739481U;
unsigned long long int var_8 = 13180206933627303129ULL;
short var_13 = (short)22055;
short var_14 = (short)27500;
short var_17 = (short)30353;
int zero = 0;
short var_19 = (short)-24186;
unsigned char var_20 = (unsigned char)30;
unsigned char var_21 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
