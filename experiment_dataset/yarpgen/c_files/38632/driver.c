#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 93938627U;
int var_7 = 2024735279;
unsigned short var_12 = (unsigned short)57323;
short var_15 = (short)10393;
int zero = 0;
int var_19 = 517530996;
unsigned int var_20 = 2624689247U;
unsigned int var_21 = 2126087795U;
signed char var_22 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
