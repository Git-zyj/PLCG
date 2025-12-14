#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8831008182367230742LL;
unsigned long long int var_4 = 5972687595741750380ULL;
unsigned char var_9 = (unsigned char)85;
unsigned long long int var_11 = 1097423029037883917ULL;
unsigned int var_14 = 174933515U;
signed char var_15 = (signed char)88;
int zero = 0;
short var_16 = (short)13813;
short var_17 = (short)19487;
unsigned short var_18 = (unsigned short)15375;
unsigned int var_19 = 2963051199U;
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
