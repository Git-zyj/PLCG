#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11670;
int var_2 = -177535619;
long long int var_5 = -6276147714396899769LL;
unsigned long long int var_7 = 7019697589509134087ULL;
int zero = 0;
unsigned long long int var_10 = 13656861163722753093ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)16007;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
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
