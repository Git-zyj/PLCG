#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1657064554;
unsigned int var_4 = 2413434711U;
short var_6 = (short)27413;
short var_7 = (short)19653;
signed char var_10 = (signed char)83;
int zero = 0;
unsigned char var_11 = (unsigned char)232;
int var_12 = -1225234810;
signed char var_13 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
