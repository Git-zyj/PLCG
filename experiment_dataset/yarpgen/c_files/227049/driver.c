#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 627237155;
int var_4 = 496189839;
short var_7 = (short)25735;
unsigned int var_12 = 4245620514U;
int zero = 0;
unsigned int var_13 = 1989130276U;
unsigned short var_14 = (unsigned short)32177;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)137;
unsigned long long int var_17 = 12394094667500077645ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
