#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 634305132;
short var_5 = (short)-1542;
short var_8 = (short)15819;
unsigned long long int var_9 = 4430074803165473669ULL;
long long int var_10 = -766884237300774476LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 246335259;
unsigned long long int var_15 = 14416038457631301828ULL;
short var_16 = (short)-414;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
