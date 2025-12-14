#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49147;
long long int var_1 = 7674904014989208795LL;
unsigned int var_8 = 2430757982U;
int var_16 = 217859723;
int zero = 0;
short var_20 = (short)9022;
unsigned int var_21 = 2155113485U;
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
