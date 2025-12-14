#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1976510419;
int var_6 = -1425625125;
int var_7 = -1500346523;
unsigned short var_8 = (unsigned short)37379;
unsigned short var_9 = (unsigned short)64959;
int var_10 = 1964882668;
signed char var_11 = (signed char)-23;
int zero = 0;
int var_12 = 706359733;
unsigned long long int var_13 = 2609242420107743104ULL;
long long int var_14 = -7464155513964563588LL;
long long int var_15 = 1151024400268948775LL;
int var_16 = 1135090;
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
