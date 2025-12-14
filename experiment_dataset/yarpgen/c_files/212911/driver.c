#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5092273959456777847LL;
int var_4 = -1696959528;
unsigned long long int var_6 = 4836877036061368097ULL;
signed char var_8 = (signed char)82;
long long int var_11 = -4757422852549798082LL;
unsigned char var_13 = (unsigned char)134;
unsigned char var_14 = (unsigned char)127;
int zero = 0;
signed char var_17 = (signed char)71;
short var_18 = (short)824;
void init() {
}

void checksum() {
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
