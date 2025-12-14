#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
signed char var_2 = (signed char)-94;
unsigned char var_3 = (unsigned char)48;
signed char var_5 = (signed char)10;
unsigned short var_9 = (unsigned short)23507;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
unsigned long long int var_14 = 5853588651688120777ULL;
signed char var_15 = (signed char)-92;
int var_16 = 414997436;
int var_17 = -1419965204;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
