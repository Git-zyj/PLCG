#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1256390898U;
unsigned short var_2 = (unsigned short)50139;
int var_5 = -74845864;
unsigned short var_10 = (unsigned short)3152;
int zero = 0;
unsigned short var_11 = (unsigned short)33475;
signed char var_12 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
