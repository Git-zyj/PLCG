#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
unsigned char var_5 = (unsigned char)54;
unsigned int var_7 = 3733715133U;
short var_10 = (short)-15187;
int zero = 0;
unsigned short var_12 = (unsigned short)34904;
long long int var_13 = 8803144987711305498LL;
unsigned short var_14 = (unsigned short)27015;
signed char var_15 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
