#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 101039778;
unsigned char var_2 = (unsigned char)68;
signed char var_8 = (signed char)-35;
int var_9 = -1411649189;
int var_11 = -1069460067;
int zero = 0;
unsigned short var_14 = (unsigned short)10909;
int var_15 = 1573912851;
short var_16 = (short)10908;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
