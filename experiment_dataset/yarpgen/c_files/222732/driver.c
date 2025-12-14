#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8297147146091110427LL;
signed char var_1 = (signed char)-115;
short var_8 = (short)15103;
short var_13 = (short)23505;
signed char var_14 = (signed char)62;
int zero = 0;
signed char var_16 = (signed char)127;
int var_17 = 497680049;
unsigned int var_18 = 2326191451U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
