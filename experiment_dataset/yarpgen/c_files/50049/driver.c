#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2196513136814362382LL;
unsigned short var_6 = (unsigned short)9817;
signed char var_8 = (signed char)99;
unsigned short var_10 = (unsigned short)42539;
int zero = 0;
unsigned short var_14 = (unsigned short)50219;
short var_15 = (short)11507;
unsigned int var_16 = 2662104806U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
