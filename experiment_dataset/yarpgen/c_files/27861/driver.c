#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 14357019;
signed char var_6 = (signed char)-116;
unsigned short var_9 = (unsigned short)49645;
signed char var_10 = (signed char)113;
int zero = 0;
unsigned long long int var_12 = 7103785705663783611ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-31629;
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
