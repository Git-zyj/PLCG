#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
unsigned char var_2 = (unsigned char)57;
unsigned long long int var_8 = 9974139744460814641ULL;
unsigned int var_14 = 483564579U;
int zero = 0;
unsigned short var_16 = (unsigned short)64361;
long long int var_17 = -7410800406169371455LL;
void init() {
}

void checksum() {
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
