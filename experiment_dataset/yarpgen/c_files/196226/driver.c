#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2756284803350369210LL;
unsigned char var_2 = (unsigned char)101;
long long int var_4 = 6343665785882077920LL;
unsigned char var_9 = (unsigned char)58;
signed char var_10 = (signed char)64;
int zero = 0;
unsigned long long int var_12 = 5488476362217272138ULL;
unsigned short var_13 = (unsigned short)9833;
unsigned short var_14 = (unsigned short)45608;
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
