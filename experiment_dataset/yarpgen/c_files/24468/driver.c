#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5636224390778835923ULL;
int var_3 = -880630393;
unsigned long long int var_4 = 16282615774848391707ULL;
unsigned short var_5 = (unsigned short)4189;
unsigned char var_9 = (unsigned char)109;
unsigned short var_14 = (unsigned short)33145;
int zero = 0;
unsigned char var_16 = (unsigned char)12;
signed char var_17 = (signed char)-69;
int var_18 = -1191330155;
unsigned short var_19 = (unsigned short)59604;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
