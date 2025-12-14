#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6898;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 12254869916240854084ULL;
signed char var_9 = (signed char)-34;
unsigned short var_11 = (unsigned short)40892;
int zero = 0;
int var_13 = -1202465843;
int var_14 = -1170739712;
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
