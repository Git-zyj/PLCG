#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
long long int var_2 = -7676722394243160547LL;
signed char var_4 = (signed char)80;
signed char var_5 = (signed char)104;
signed char var_8 = (signed char)-107;
int zero = 0;
signed char var_10 = (signed char)-19;
unsigned char var_11 = (unsigned char)117;
signed char var_12 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
