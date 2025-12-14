#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)50;
signed char var_13 = (signed char)35;
int zero = 0;
signed char var_18 = (signed char)10;
unsigned long long int var_19 = 3920448358239592655ULL;
signed char var_20 = (signed char)-48;
unsigned int var_21 = 805720204U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
