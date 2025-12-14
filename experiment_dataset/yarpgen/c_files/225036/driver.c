#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-120;
unsigned int var_9 = 1149837204U;
unsigned short var_17 = (unsigned short)13686;
int zero = 0;
unsigned long long int var_20 = 7462112168763138197ULL;
signed char var_21 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
