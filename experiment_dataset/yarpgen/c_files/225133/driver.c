#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11295933386047248117ULL;
long long int var_2 = 6750994281145141190LL;
signed char var_3 = (signed char)-123;
int zero = 0;
unsigned short var_12 = (unsigned short)25207;
long long int var_13 = -3134167407339063225LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
