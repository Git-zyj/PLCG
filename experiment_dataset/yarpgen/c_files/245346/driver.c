#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41158;
unsigned int var_9 = 846214420U;
unsigned short var_11 = (unsigned short)4878;
int zero = 0;
unsigned long long int var_12 = 16359660234846790443ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13208697443633777345ULL;
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
