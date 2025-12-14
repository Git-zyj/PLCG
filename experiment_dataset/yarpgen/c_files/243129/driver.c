#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8836011555809878067LL;
unsigned long long int var_2 = 11209347045455953733ULL;
short var_4 = (short)-30085;
unsigned int var_6 = 691841527U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-96;
int var_17 = 2130892787;
int zero = 0;
short var_18 = (short)-23626;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4586507571982488762LL;
unsigned short var_21 = (unsigned short)13000;
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
