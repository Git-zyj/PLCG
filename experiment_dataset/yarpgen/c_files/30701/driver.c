#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -654248428;
short var_7 = (short)18438;
signed char var_9 = (signed char)-92;
unsigned int var_10 = 809071258U;
unsigned char var_11 = (unsigned char)220;
int zero = 0;
unsigned int var_12 = 1507165583U;
short var_13 = (short)22051;
unsigned long long int var_14 = 2642864157586303146ULL;
void init() {
}

void checksum() {
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
