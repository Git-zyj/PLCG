#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4060287192U;
unsigned long long int var_8 = 1648476146648958101ULL;
int var_14 = 849093350;
int var_16 = 1414724439;
int zero = 0;
int var_18 = 1684445168;
unsigned int var_19 = 2486312553U;
unsigned char var_20 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
