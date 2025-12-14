#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -843595369;
unsigned long long int var_5 = 15683863331111354125ULL;
signed char var_7 = (signed char)-31;
unsigned char var_8 = (unsigned char)205;
int var_9 = -60847358;
signed char var_12 = (signed char)-127;
int var_16 = 654186938;
unsigned long long int var_17 = 4453495140017918365ULL;
short var_18 = (short)-170;
int zero = 0;
unsigned short var_20 = (unsigned short)6500;
long long int var_21 = 961956455165004146LL;
int var_22 = -244340848;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
