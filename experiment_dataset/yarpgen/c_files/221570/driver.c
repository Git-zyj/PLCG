#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1533183369224104641LL;
unsigned int var_2 = 928265070U;
unsigned short var_7 = (unsigned short)48622;
unsigned long long int var_11 = 10831275412408642609ULL;
unsigned char var_12 = (unsigned char)88;
unsigned int var_14 = 3366266611U;
unsigned short var_15 = (unsigned short)3314;
unsigned long long int var_16 = 3960282424951039903ULL;
int zero = 0;
signed char var_19 = (signed char)-98;
long long int var_20 = -5819570204046225688LL;
short var_21 = (short)1541;
unsigned char var_22 = (unsigned char)81;
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
