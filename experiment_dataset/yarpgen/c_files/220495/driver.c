#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 524284679U;
unsigned short var_1 = (unsigned short)17125;
short var_9 = (short)-3630;
long long int var_10 = -4454664947430593856LL;
short var_13 = (short)-28228;
int zero = 0;
unsigned int var_19 = 4030149529U;
unsigned char var_20 = (unsigned char)80;
void init() {
}

void checksum() {
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
