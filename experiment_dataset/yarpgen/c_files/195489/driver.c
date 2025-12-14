#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)245;
long long int var_7 = 505760162372669387LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7702261773008774404LL;
int zero = 0;
unsigned long long int var_20 = 13409937591734450185ULL;
unsigned long long int var_21 = 17712069249502592193ULL;
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
