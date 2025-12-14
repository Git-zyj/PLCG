#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned short var_1 = (unsigned short)44668;
signed char var_2 = (signed char)-26;
unsigned int var_10 = 2842028824U;
int zero = 0;
short var_11 = (short)1439;
short var_12 = (short)10203;
unsigned long long int var_13 = 10458520371799343727ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
