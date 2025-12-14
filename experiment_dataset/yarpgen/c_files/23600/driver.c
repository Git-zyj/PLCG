#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1661074975;
unsigned int var_2 = 1335247518U;
unsigned short var_4 = (unsigned short)40025;
unsigned long long int var_8 = 7969091084644141923ULL;
short var_15 = (short)32587;
unsigned short var_17 = (unsigned short)52414;
int zero = 0;
int var_20 = 397624273;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)34443;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
