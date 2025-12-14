#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
long long int var_2 = 4462177605763019987LL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-16674;
signed char var_12 = (signed char)115;
unsigned char var_15 = (unsigned char)126;
int zero = 0;
short var_16 = (short)-11366;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)62;
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
