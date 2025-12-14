#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15404289416056029773ULL;
unsigned int var_2 = 695693859U;
signed char var_3 = (signed char)21;
unsigned short var_5 = (unsigned short)51956;
unsigned short var_14 = (unsigned short)7011;
int zero = 0;
unsigned int var_15 = 342568257U;
unsigned int var_16 = 670187440U;
void init() {
}

void checksum() {
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
