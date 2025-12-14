#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned int var_2 = 2293928201U;
unsigned int var_3 = 2594189080U;
unsigned char var_4 = (unsigned char)15;
long long int var_5 = -6807417419793910455LL;
unsigned int var_6 = 3358101983U;
long long int var_7 = 8981437436453092404LL;
unsigned long long int var_8 = 15860139890999781192ULL;
int zero = 0;
unsigned long long int var_10 = 16091170426856095517ULL;
unsigned char var_11 = (unsigned char)222;
short var_12 = (short)14717;
unsigned long long int var_13 = 10071839269898215300ULL;
unsigned long long int var_14 = 4014391521465446677ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
