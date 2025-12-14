#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4520988395619298090LL;
int var_3 = -1359653999;
int var_9 = 200681805;
unsigned short var_13 = (unsigned short)56148;
unsigned short var_14 = (unsigned short)40164;
int zero = 0;
unsigned char var_17 = (unsigned char)4;
unsigned char var_18 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
