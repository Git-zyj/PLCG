#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)37217;
short var_7 = (short)12123;
unsigned long long int var_15 = 16687091076281122278ULL;
int zero = 0;
long long int var_19 = 9068380226489142808LL;
unsigned short var_20 = (unsigned short)51925;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
