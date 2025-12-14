#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12508;
unsigned long long int var_7 = 17150813844793392838ULL;
int var_12 = -1454825238;
unsigned long long int var_13 = 5934702063847973465ULL;
signed char var_17 = (signed char)118;
int zero = 0;
short var_18 = (short)30687;
long long int var_19 = -6159663734356078346LL;
int var_20 = -386347125;
long long int var_21 = 3157090730951262475LL;
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
