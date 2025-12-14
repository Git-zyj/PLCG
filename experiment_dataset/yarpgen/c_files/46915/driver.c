#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1386774637;
unsigned long long int var_2 = 1768358171148393509ULL;
signed char var_8 = (signed char)-74;
int var_11 = -1833634586;
signed char var_15 = (signed char)-9;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1626018377;
short var_18 = (short)-3253;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
