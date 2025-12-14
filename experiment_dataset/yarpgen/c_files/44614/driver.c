#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2871909634U;
unsigned short var_2 = (unsigned short)20265;
signed char var_6 = (signed char)-10;
unsigned short var_8 = (unsigned short)63859;
int zero = 0;
signed char var_20 = (signed char)-10;
long long int var_21 = 4310384927544031507LL;
unsigned short var_22 = (unsigned short)37738;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
