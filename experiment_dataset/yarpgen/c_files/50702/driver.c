#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1321265693U;
signed char var_7 = (signed char)-42;
short var_8 = (short)28892;
unsigned char var_11 = (unsigned char)44;
unsigned int var_13 = 685340180U;
int zero = 0;
signed char var_14 = (signed char)-58;
long long int var_15 = 2518601571652427740LL;
int var_16 = 1353033430;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
