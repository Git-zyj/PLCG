#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2105038749;
signed char var_5 = (signed char)-61;
long long int var_7 = -4686573455062642045LL;
unsigned long long int var_10 = 14064482304884652181ULL;
int zero = 0;
long long int var_18 = 8155899771942397707LL;
int var_19 = -1634376130;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
