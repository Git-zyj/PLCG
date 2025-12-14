#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17150357320458697518ULL;
unsigned long long int var_2 = 11154305971217771265ULL;
unsigned int var_5 = 513774679U;
unsigned long long int var_6 = 11433953137205530416ULL;
short var_11 = (short)19000;
unsigned short var_12 = (unsigned short)41384;
unsigned short var_15 = (unsigned short)59738;
int zero = 0;
long long int var_20 = 8314266406805174370LL;
signed char var_21 = (signed char)-70;
unsigned char var_22 = (unsigned char)59;
long long int var_23 = 4612146580552533932LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
