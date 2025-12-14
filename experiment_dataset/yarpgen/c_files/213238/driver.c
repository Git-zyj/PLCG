#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1204411528228559054LL;
signed char var_8 = (signed char)23;
short var_11 = (short)-5937;
short var_12 = (short)-28543;
int zero = 0;
unsigned short var_19 = (unsigned short)36842;
short var_20 = (short)897;
void init() {
}

void checksum() {
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
