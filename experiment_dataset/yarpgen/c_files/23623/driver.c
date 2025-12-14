#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 513625773U;
unsigned short var_3 = (unsigned short)23950;
long long int var_6 = -373320508865362835LL;
unsigned char var_14 = (unsigned char)195;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 875854799U;
unsigned int var_21 = 4078013955U;
unsigned int var_22 = 1690494619U;
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
