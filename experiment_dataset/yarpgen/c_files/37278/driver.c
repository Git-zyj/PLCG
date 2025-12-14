#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -312458219862619741LL;
long long int var_2 = 5635003524598947211LL;
unsigned long long int var_11 = 2895983414390719435ULL;
int zero = 0;
short var_13 = (short)-3733;
signed char var_14 = (signed char)4;
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
