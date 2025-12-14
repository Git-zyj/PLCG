#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 540874393U;
long long int var_4 = 2970244606513150936LL;
short var_10 = (short)27808;
unsigned short var_11 = (unsigned short)48648;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)18618;
signed char var_14 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
