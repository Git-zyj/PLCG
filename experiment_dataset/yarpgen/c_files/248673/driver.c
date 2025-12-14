#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
short var_10 = (short)-16096;
signed char var_12 = (signed char)68;
long long int var_13 = -2623570011742684917LL;
unsigned char var_14 = (unsigned char)156;
int zero = 0;
int var_16 = -464430597;
unsigned char var_17 = (unsigned char)34;
short var_18 = (short)-27299;
unsigned int var_19 = 1783315175U;
short var_20 = (short)-26953;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
