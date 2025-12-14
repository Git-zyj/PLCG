#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)125;
short var_5 = (short)11863;
long long int var_14 = -8035030063199191662LL;
long long int var_15 = 1781836983959274101LL;
signed char var_16 = (signed char)76;
int zero = 0;
short var_17 = (short)8880;
short var_18 = (short)-9507;
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
