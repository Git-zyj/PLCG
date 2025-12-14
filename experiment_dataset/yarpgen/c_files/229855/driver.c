#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
unsigned long long int var_2 = 12471508354873473346ULL;
unsigned short var_3 = (unsigned short)48262;
unsigned long long int var_4 = 17770311034458956679ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 3326942930780160957LL;
long long int var_9 = 2710469673565413043LL;
unsigned long long int var_10 = 8861773364454731969ULL;
int var_11 = 717130259;
int zero = 0;
signed char var_12 = (signed char)-11;
signed char var_13 = (signed char)-48;
long long int var_14 = 738667745919168908LL;
int var_15 = -1950383712;
unsigned long long int var_16 = 1793952713446095994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
