#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
int var_5 = 769981043;
unsigned char var_6 = (unsigned char)14;
int var_7 = 770436062;
signed char var_9 = (signed char)-114;
unsigned char var_11 = (unsigned char)207;
unsigned char var_15 = (unsigned char)220;
int var_19 = -2008671235;
int zero = 0;
int var_20 = -849081045;
signed char var_21 = (signed char)86;
unsigned char var_22 = (unsigned char)84;
_Bool var_23 = (_Bool)0;
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
