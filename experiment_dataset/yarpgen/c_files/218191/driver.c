#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20975;
int var_3 = -994383736;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_7 = 4661893739772372296ULL;
int var_9 = -361062661;
unsigned long long int var_11 = 17384199452587918307ULL;
int zero = 0;
unsigned long long int var_12 = 3211099015572111559ULL;
unsigned char var_13 = (unsigned char)182;
unsigned int var_14 = 4225484823U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
