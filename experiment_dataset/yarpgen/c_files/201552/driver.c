#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned short var_1 = (unsigned short)51119;
short var_3 = (short)-24713;
unsigned long long int var_4 = 606920979280906565ULL;
signed char var_6 = (signed char)-41;
unsigned long long int var_10 = 11759289037161092708ULL;
int zero = 0;
unsigned long long int var_12 = 2275425956699154258ULL;
signed char var_13 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
