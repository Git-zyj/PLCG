#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3368003814U;
signed char var_3 = (signed char)95;
unsigned long long int var_4 = 5196808725439232974ULL;
int var_14 = -367818219;
unsigned short var_15 = (unsigned short)15175;
unsigned long long int var_19 = 10158237557231979023ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)37225;
short var_21 = (short)-8373;
signed char var_22 = (signed char)-126;
short var_23 = (short)-19141;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
