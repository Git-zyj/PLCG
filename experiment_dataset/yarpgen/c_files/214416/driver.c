#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10445134355394469188ULL;
unsigned short var_1 = (unsigned short)29183;
signed char var_3 = (signed char)108;
unsigned long long int var_4 = 15822657332033271272ULL;
unsigned long long int var_10 = 14418631328581995925ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)70;
int var_13 = -930399579;
int var_14 = 1904309781;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
