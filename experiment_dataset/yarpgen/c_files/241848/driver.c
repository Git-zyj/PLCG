#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1092447700U;
short var_6 = (short)-11547;
unsigned char var_9 = (unsigned char)198;
long long int var_12 = 4340702236004319021LL;
short var_17 = (short)3794;
int zero = 0;
long long int var_20 = 6543825695704814648LL;
short var_21 = (short)13708;
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
