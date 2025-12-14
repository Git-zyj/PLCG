#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-10;
unsigned short var_10 = (unsigned short)38478;
int var_12 = -372292235;
int zero = 0;
unsigned int var_18 = 1743616446U;
unsigned int var_19 = 2446533321U;
unsigned char var_20 = (unsigned char)183;
unsigned char var_21 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
