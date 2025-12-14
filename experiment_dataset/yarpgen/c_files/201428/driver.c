#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28579;
short var_3 = (short)-24922;
unsigned char var_4 = (unsigned char)7;
signed char var_6 = (signed char)-10;
unsigned int var_8 = 1373032859U;
int var_18 = 646886403;
int zero = 0;
long long int var_20 = -7606018477751863743LL;
short var_21 = (short)-6866;
void init() {
}

void checksum() {
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
