#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41782;
signed char var_3 = (signed char)-90;
signed char var_11 = (signed char)111;
unsigned int var_12 = 60127252U;
unsigned char var_14 = (unsigned char)9;
int zero = 0;
short var_15 = (short)18961;
unsigned long long int var_16 = 9609388954981963137ULL;
signed char var_17 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
