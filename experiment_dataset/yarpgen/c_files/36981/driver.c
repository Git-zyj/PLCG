#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3842852169U;
unsigned short var_2 = (unsigned short)12280;
unsigned int var_3 = 2251019670U;
unsigned long long int var_6 = 13666201226341639893ULL;
int zero = 0;
long long int var_11 = -2482493870779253272LL;
int var_12 = -853716712;
unsigned int var_13 = 2194657190U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
