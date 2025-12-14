#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-7;
signed char var_8 = (signed char)36;
signed char var_12 = (signed char)20;
int zero = 0;
unsigned long long int var_19 = 16420341045751863018ULL;
unsigned short var_20 = (unsigned short)25832;
unsigned char var_21 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
