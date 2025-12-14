#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1171338493;
long long int var_5 = 179952164336933163LL;
int var_6 = 1855347056;
int zero = 0;
signed char var_10 = (signed char)-104;
long long int var_11 = 2770179622122212842LL;
unsigned short var_12 = (unsigned short)17501;
short var_13 = (short)3008;
unsigned long long int var_14 = 15311458746106308024ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
