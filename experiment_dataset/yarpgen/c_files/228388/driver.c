#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15679;
long long int var_1 = -6165399081144180721LL;
unsigned long long int var_2 = 6485470717562685772ULL;
unsigned int var_6 = 4258511417U;
signed char var_11 = (signed char)-82;
int zero = 0;
long long int var_13 = -870680875016239648LL;
short var_14 = (short)30540;
unsigned int var_15 = 1069492135U;
void init() {
}

void checksum() {
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
