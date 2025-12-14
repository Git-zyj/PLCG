#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned int var_2 = 4150482202U;
int var_5 = -465356698;
long long int var_17 = -7793317804375401823LL;
int zero = 0;
int var_20 = -1519088580;
unsigned int var_21 = 4273090491U;
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
