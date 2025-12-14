#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28295;
signed char var_1 = (signed char)-33;
unsigned int var_4 = 1181589144U;
unsigned long long int var_10 = 11790276625890228327ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)26771;
unsigned long long int var_13 = 6923133527886712010ULL;
unsigned short var_14 = (unsigned short)35309;
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
