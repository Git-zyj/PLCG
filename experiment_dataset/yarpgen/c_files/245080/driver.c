#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64771;
signed char var_2 = (signed char)-55;
unsigned char var_4 = (unsigned char)51;
signed char var_5 = (signed char)64;
unsigned short var_7 = (unsigned short)62293;
long long int var_9 = 8541836348878290651LL;
int zero = 0;
int var_10 = -2019378839;
unsigned char var_11 = (unsigned char)124;
signed char var_12 = (signed char)-92;
unsigned char var_13 = (unsigned char)20;
unsigned long long int var_14 = 1796724530076239690ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
