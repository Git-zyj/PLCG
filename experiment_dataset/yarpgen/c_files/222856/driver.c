#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2832639713U;
unsigned int var_7 = 2584983438U;
_Bool var_9 = (_Bool)0;
short var_11 = (short)24179;
unsigned long long int var_19 = 11544058013332217442ULL;
int zero = 0;
signed char var_20 = (signed char)28;
unsigned long long int var_21 = 16369072127171954391ULL;
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
