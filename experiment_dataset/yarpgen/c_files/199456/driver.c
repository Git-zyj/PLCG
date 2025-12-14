#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12324;
unsigned short var_6 = (unsigned short)41051;
long long int var_12 = -1191305612248525739LL;
int zero = 0;
long long int var_16 = -1301436164105946762LL;
signed char var_17 = (signed char)86;
signed char var_18 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
