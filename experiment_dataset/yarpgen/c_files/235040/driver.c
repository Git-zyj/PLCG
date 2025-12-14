#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-66;
long long int var_6 = -5900807727087371899LL;
signed char var_7 = (signed char)-53;
short var_10 = (short)-14716;
int zero = 0;
long long int var_13 = -7106624644925130840LL;
unsigned long long int var_14 = 12698442511152975308ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
