#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
signed char var_3 = (signed char)-3;
unsigned long long int var_6 = 8401237659210250004ULL;
unsigned int var_7 = 3206035442U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 10537023092581577626ULL;
int zero = 0;
short var_12 = (short)-32579;
signed char var_13 = (signed char)-5;
long long int var_14 = 1653840591701756570LL;
short var_15 = (short)30798;
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
