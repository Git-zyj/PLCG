#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1106306855;
unsigned short var_3 = (unsigned short)4278;
unsigned int var_7 = 1101722423U;
int var_10 = -1497429663;
signed char var_12 = (signed char)-9;
unsigned int var_15 = 990823579U;
int var_16 = -2029978659;
int zero = 0;
long long int var_17 = 2105629445907209027LL;
unsigned int var_18 = 4263959565U;
unsigned char var_19 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
