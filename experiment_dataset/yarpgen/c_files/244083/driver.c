#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 68192523;
short var_2 = (short)-19679;
int var_3 = -1815518705;
int var_5 = 25841427;
unsigned char var_7 = (unsigned char)77;
unsigned char var_9 = (unsigned char)90;
unsigned int var_10 = 2229487386U;
short var_11 = (short)-3059;
unsigned char var_12 = (unsigned char)77;
int zero = 0;
long long int var_14 = -2089600092853844541LL;
unsigned int var_15 = 2803121435U;
int var_16 = 393332215;
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
