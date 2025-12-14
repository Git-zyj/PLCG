#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27419;
short var_1 = (short)17312;
signed char var_3 = (signed char)86;
long long int var_4 = -1707449758260562180LL;
unsigned short var_5 = (unsigned short)1014;
unsigned long long int var_6 = 9455555573985338469ULL;
unsigned short var_7 = (unsigned short)58958;
int var_9 = -740256004;
int zero = 0;
unsigned short var_12 = (unsigned short)18789;
long long int var_13 = 4863116386843298887LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4054490868885889570LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
