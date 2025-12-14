#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1167442674;
signed char var_3 = (signed char)-2;
long long int var_5 = 2219135831930899501LL;
int zero = 0;
unsigned int var_10 = 3924384160U;
unsigned int var_11 = 912857115U;
short var_12 = (short)-7104;
unsigned char var_13 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
