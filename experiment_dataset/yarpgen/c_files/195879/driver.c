#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
signed char var_2 = (signed char)-74;
unsigned short var_11 = (unsigned short)45674;
int var_13 = 1246048146;
unsigned int var_17 = 1171606769U;
int zero = 0;
unsigned char var_18 = (unsigned char)226;
signed char var_19 = (signed char)58;
short var_20 = (short)15706;
void init() {
}

void checksum() {
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
