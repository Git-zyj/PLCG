#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
unsigned short var_3 = (unsigned short)14925;
long long int var_4 = -9033361098901961693LL;
unsigned short var_9 = (unsigned short)27597;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
