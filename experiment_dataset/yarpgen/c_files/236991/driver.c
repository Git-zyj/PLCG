#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3853539600930523427LL;
unsigned short var_2 = (unsigned short)60079;
signed char var_11 = (signed char)68;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)20799;
unsigned long long int var_14 = 14133340833681326416ULL;
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
