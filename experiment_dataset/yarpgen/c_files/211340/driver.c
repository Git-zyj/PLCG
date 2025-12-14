#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
short var_5 = (short)21613;
_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 4862013638257151759ULL;
int var_14 = 1115165336;
unsigned long long int var_19 = 8920589210344600073ULL;
int zero = 0;
unsigned long long int var_20 = 1584636963849635436ULL;
long long int var_21 = -3373913871693256585LL;
unsigned char var_22 = (unsigned char)170;
_Bool var_23 = (_Bool)0;
long long int var_24 = -5651166291952599900LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
