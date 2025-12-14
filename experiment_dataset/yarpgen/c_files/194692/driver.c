#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)39337;
long long int var_9 = 74802428201855585LL;
long long int var_11 = -201337216512893874LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)12913;
long long int var_18 = 4928106159426444059LL;
int zero = 0;
short var_19 = (short)18826;
long long int var_20 = 2974709452594231000LL;
unsigned short var_21 = (unsigned short)4466;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
