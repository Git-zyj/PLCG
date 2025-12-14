#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8059679887498088572ULL;
unsigned char var_3 = (unsigned char)208;
unsigned long long int var_4 = 17465356844707526222ULL;
long long int var_7 = -4652762651842619551LL;
unsigned char var_10 = (unsigned char)238;
short var_11 = (short)13630;
int zero = 0;
int var_12 = -1128657397;
unsigned char var_13 = (unsigned char)188;
unsigned short var_14 = (unsigned short)20783;
signed char var_15 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
