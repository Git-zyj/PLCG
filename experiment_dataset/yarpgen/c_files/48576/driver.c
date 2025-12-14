#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2704338025U;
unsigned int var_3 = 3767861255U;
unsigned long long int var_4 = 11869204667112131082ULL;
unsigned long long int var_6 = 18202703266515465071ULL;
signed char var_11 = (signed char)-94;
unsigned short var_14 = (unsigned short)59183;
short var_17 = (short)27630;
int zero = 0;
unsigned char var_19 = (unsigned char)55;
unsigned short var_20 = (unsigned short)14301;
int var_21 = 834911136;
signed char var_22 = (signed char)9;
unsigned short var_23 = (unsigned short)44013;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
