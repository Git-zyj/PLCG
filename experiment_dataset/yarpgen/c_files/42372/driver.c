#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18828;
unsigned short var_4 = (unsigned short)13753;
signed char var_8 = (signed char)-65;
unsigned char var_12 = (unsigned char)150;
unsigned long long int var_14 = 5259183963311202446ULL;
short var_17 = (short)-9240;
int zero = 0;
short var_19 = (short)12741;
int var_20 = 649159798;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
