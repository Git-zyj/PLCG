#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
long long int var_2 = -7557676685228313456LL;
long long int var_3 = -4283264624509452934LL;
long long int var_7 = -4622865175001087985LL;
int zero = 0;
int var_10 = -1517672134;
unsigned char var_11 = (unsigned char)96;
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
