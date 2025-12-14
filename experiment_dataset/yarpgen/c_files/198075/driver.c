#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14509163067610475806ULL;
unsigned int var_10 = 1476339027U;
int var_12 = 1132586787;
unsigned long long int var_13 = 8490960199707522151ULL;
short var_17 = (short)14988;
int zero = 0;
short var_19 = (short)25030;
short var_20 = (short)-29740;
signed char var_21 = (signed char)-18;
int var_22 = -35920687;
unsigned long long int var_23 = 4005854205427474610ULL;
int var_24 = 924520096;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
