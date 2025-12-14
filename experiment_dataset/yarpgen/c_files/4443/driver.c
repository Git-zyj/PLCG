#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13848;
unsigned long long int var_1 = 1061232278230474672ULL;
unsigned int var_3 = 3721879440U;
unsigned char var_4 = (unsigned char)135;
short var_7 = (short)-29188;
long long int var_8 = -145342420120677271LL;
unsigned long long int var_9 = 13758817125692459967ULL;
signed char var_10 = (signed char)26;
int zero = 0;
unsigned short var_11 = (unsigned short)50326;
unsigned short var_12 = (unsigned short)44175;
long long int var_13 = 7616208259052566538LL;
unsigned short var_14 = (unsigned short)11001;
void init() {
}

void checksum() {
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
