#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)26655;
unsigned char var_10 = (unsigned char)4;
unsigned long long int var_11 = 10849537700609207753ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)60268;
long long int var_21 = 5628650050148818031LL;
int var_22 = -1598407250;
unsigned short var_23 = (unsigned short)26549;
unsigned char var_24 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
