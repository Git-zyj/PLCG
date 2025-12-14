#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)104;
signed char var_4 = (signed char)16;
int var_6 = 1539462088;
int var_7 = -1428208748;
int zero = 0;
unsigned long long int var_10 = 4263642850694783830ULL;
int var_11 = 1731403787;
unsigned long long int var_12 = 17589622047682727414ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
