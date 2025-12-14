#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1488261426;
short var_3 = (short)-27570;
short var_7 = (short)-31733;
long long int var_8 = -8743749813235566072LL;
unsigned char var_11 = (unsigned char)151;
unsigned long long int var_12 = 7896996954830156375ULL;
short var_13 = (short)-28500;
unsigned int var_14 = 3567992386U;
signed char var_15 = (signed char)-110;
long long int var_16 = -2632462114159464448LL;
unsigned char var_17 = (unsigned char)192;
unsigned char var_18 = (unsigned char)8;
int zero = 0;
unsigned long long int var_19 = 14347184994707029091ULL;
short var_20 = (short)22356;
int var_21 = 993506203;
void init() {
}

void checksum() {
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
