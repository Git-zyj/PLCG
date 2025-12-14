#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
unsigned long long int var_2 = 1398055181856110795ULL;
int var_4 = 315293641;
long long int var_5 = 5675905645877199950LL;
signed char var_6 = (signed char)68;
unsigned long long int var_7 = 2880415152618716566ULL;
short var_11 = (short)5953;
unsigned long long int var_12 = 15790681772403464654ULL;
int zero = 0;
unsigned int var_15 = 2129966133U;
unsigned short var_16 = (unsigned short)63190;
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
