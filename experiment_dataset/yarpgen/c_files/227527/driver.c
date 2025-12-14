#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44777;
short var_13 = (short)8708;
int zero = 0;
unsigned short var_17 = (unsigned short)40971;
long long int var_18 = 5378563449855244031LL;
unsigned short var_19 = (unsigned short)39047;
int var_20 = -1969639697;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
