#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38816;
unsigned int var_2 = 608745208U;
signed char var_4 = (signed char)-7;
unsigned long long int var_5 = 13982157142294275059ULL;
unsigned short var_11 = (unsigned short)60447;
unsigned long long int var_13 = 4180158566850359762ULL;
int zero = 0;
short var_14 = (short)-30246;
unsigned long long int var_15 = 12479975240668809573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
