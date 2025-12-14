#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
signed char var_4 = (signed char)35;
unsigned int var_6 = 3745416697U;
unsigned short var_10 = (unsigned short)21243;
int zero = 0;
signed char var_11 = (signed char)-4;
unsigned short var_12 = (unsigned short)9619;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
