#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13673177655840322445ULL;
unsigned long long int var_6 = 8469712379008888589ULL;
unsigned char var_10 = (unsigned char)184;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)101;
int zero = 0;
long long int var_16 = 789815809408587066LL;
int var_17 = -1758541261;
signed char var_18 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
