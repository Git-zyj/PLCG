#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
signed char var_2 = (signed char)71;
signed char var_3 = (signed char)-42;
unsigned long long int var_4 = 5348304224401622253ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2270849929U;
long long int var_17 = -6672128757713842688LL;
int var_18 = -1640430951;
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
