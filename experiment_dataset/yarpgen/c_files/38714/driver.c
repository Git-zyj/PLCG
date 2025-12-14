#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)29;
unsigned long long int var_5 = 242901764124561274ULL;
unsigned char var_10 = (unsigned char)244;
int zero = 0;
unsigned short var_12 = (unsigned short)32448;
unsigned int var_13 = 3734885679U;
short var_14 = (short)13540;
unsigned long long int var_15 = 464248978413367187ULL;
unsigned char var_16 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
