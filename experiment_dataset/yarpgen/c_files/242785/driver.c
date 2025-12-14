#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 138564058U;
long long int var_4 = 8313758656893383266LL;
unsigned int var_6 = 4037433167U;
int var_7 = 1782394629;
signed char var_8 = (signed char)91;
int zero = 0;
long long int var_12 = -3908181931497062565LL;
long long int var_13 = 3363324364554795189LL;
signed char var_14 = (signed char)-56;
unsigned short var_15 = (unsigned short)33777;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
