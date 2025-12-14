#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29708;
int var_8 = 1174983076;
signed char var_12 = (signed char)-74;
long long int var_13 = -1312818056896630489LL;
int zero = 0;
unsigned char var_15 = (unsigned char)79;
unsigned char var_16 = (unsigned char)59;
signed char var_17 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
