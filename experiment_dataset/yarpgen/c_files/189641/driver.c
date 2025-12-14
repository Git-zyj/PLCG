#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)15507;
unsigned char var_7 = (unsigned char)162;
long long int var_8 = -6772772769374147363LL;
long long int var_10 = -5163223947985001969LL;
int zero = 0;
unsigned long long int var_11 = 14390689608188326624ULL;
unsigned int var_12 = 3481961101U;
long long int var_13 = 2488674243983926094LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
