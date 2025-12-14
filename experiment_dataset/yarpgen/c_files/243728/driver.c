#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
int var_1 = 1296046319;
unsigned long long int var_5 = 17684179302233137997ULL;
int var_8 = 2080526947;
unsigned int var_9 = 3443749851U;
int var_10 = -1231637350;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-25278;
void init() {
}

void checksum() {
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
