#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -491587418;
long long int var_2 = -1461943910185866372LL;
unsigned short var_6 = (unsigned short)35217;
unsigned short var_7 = (unsigned short)38250;
int var_8 = -860035939;
signed char var_11 = (signed char)20;
int zero = 0;
long long int var_12 = 1413935808791592687LL;
unsigned int var_13 = 2437480945U;
unsigned short var_14 = (unsigned short)58622;
_Bool var_15 = (_Bool)1;
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
