#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13512440393318023651ULL;
unsigned long long int var_9 = 12168839946110407040ULL;
long long int var_10 = 4068984035809946919LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-90;
int var_14 = -1019671629;
signed char var_15 = (signed char)-26;
signed char var_16 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
