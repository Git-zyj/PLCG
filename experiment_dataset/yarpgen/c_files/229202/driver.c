#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-118;
unsigned char var_3 = (unsigned char)247;
signed char var_4 = (signed char)14;
unsigned int var_5 = 1649549718U;
long long int var_8 = 3509595937551585059LL;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
unsigned short var_13 = (unsigned short)9697;
signed char var_14 = (signed char)-70;
void init() {
}

void checksum() {
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
