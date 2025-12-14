#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
int var_7 = -44767867;
unsigned short var_12 = (unsigned short)34399;
unsigned short var_13 = (unsigned short)40917;
long long int var_15 = -1437438807327374575LL;
int zero = 0;
long long int var_17 = 3946732658411491295LL;
unsigned short var_18 = (unsigned short)40852;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
