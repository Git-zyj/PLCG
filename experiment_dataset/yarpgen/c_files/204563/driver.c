#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30222;
unsigned long long int var_7 = 8317696118374569758ULL;
unsigned short var_11 = (unsigned short)27017;
int zero = 0;
unsigned long long int var_18 = 4317373483262766373ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)24;
void init() {
}

void checksum() {
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
