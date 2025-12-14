#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 254533130624628573LL;
long long int var_6 = -820273168663549579LL;
unsigned short var_8 = (unsigned short)50891;
short var_9 = (short)12390;
int zero = 0;
signed char var_12 = (signed char)94;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1882714113541627848ULL;
unsigned long long int var_16 = 10582525476944775185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
