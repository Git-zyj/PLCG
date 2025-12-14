#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1525485555U;
unsigned int var_7 = 2704479304U;
long long int var_8 = 2863152206202970094LL;
signed char var_11 = (signed char)9;
int zero = 0;
signed char var_15 = (signed char)6;
unsigned short var_16 = (unsigned short)62583;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
