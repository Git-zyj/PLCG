#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1068173469;
long long int var_3 = -7206944714379535325LL;
unsigned int var_10 = 3580871272U;
unsigned char var_13 = (unsigned char)103;
int zero = 0;
int var_15 = 1748641001;
unsigned short var_16 = (unsigned short)13792;
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
