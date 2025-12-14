#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -171014958;
unsigned short var_6 = (unsigned short)34743;
unsigned short var_8 = (unsigned short)54914;
unsigned long long int var_11 = 14591540917638432939ULL;
unsigned short var_12 = (unsigned short)29928;
unsigned int var_13 = 504860279U;
int zero = 0;
unsigned int var_17 = 3579755557U;
int var_18 = 1704333634;
unsigned long long int var_19 = 14030730552814569713ULL;
void init() {
}

void checksum() {
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
