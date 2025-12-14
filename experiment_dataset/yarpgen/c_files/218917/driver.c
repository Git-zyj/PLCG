#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)64;
unsigned long long int var_3 = 1124788427948629079ULL;
int var_5 = -1742764989;
long long int var_6 = -4271483366901378402LL;
signed char var_7 = (signed char)123;
signed char var_8 = (signed char)90;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 900120831U;
int zero = 0;
unsigned short var_13 = (unsigned short)39085;
signed char var_14 = (signed char)119;
signed char var_15 = (signed char)97;
unsigned int var_16 = 231187423U;
short var_17 = (short)12080;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
