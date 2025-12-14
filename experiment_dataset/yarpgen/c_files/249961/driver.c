#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 738488808;
long long int var_3 = -6014959058506205317LL;
long long int var_7 = -6191840713866509994LL;
long long int var_8 = 5128593823756128206LL;
signed char var_10 = (signed char)38;
int zero = 0;
unsigned long long int var_17 = 14668823062188904442ULL;
int var_18 = -700424688;
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
