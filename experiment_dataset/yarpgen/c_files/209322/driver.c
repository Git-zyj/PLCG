#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6976;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)80;
long long int var_13 = 9058166959377349598LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)38285;
unsigned long long int var_20 = 18220311710618809083ULL;
int var_21 = 1607667236;
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
