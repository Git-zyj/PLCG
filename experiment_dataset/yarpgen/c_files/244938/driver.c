#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11410;
unsigned long long int var_2 = 2302598931045295140ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 16440641293732598600ULL;
int var_11 = -334057423;
short var_12 = (short)-7671;
unsigned char var_13 = (unsigned char)95;
int zero = 0;
short var_15 = (short)-21152;
long long int var_16 = -3502284261208171352LL;
unsigned long long int var_17 = 12015468901988253110ULL;
int var_18 = -1381390438;
unsigned int var_19 = 676532619U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
