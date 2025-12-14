#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4364879846192256319LL;
long long int var_1 = 396273869808000869LL;
unsigned char var_3 = (unsigned char)58;
unsigned int var_6 = 756497609U;
unsigned char var_7 = (unsigned char)41;
unsigned long long int var_11 = 3260103675812459173ULL;
int zero = 0;
signed char var_12 = (signed char)50;
long long int var_13 = -5999183212419769165LL;
unsigned int var_14 = 3651475166U;
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
