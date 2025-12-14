#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11129423117691893273ULL;
signed char var_11 = (signed char)10;
unsigned short var_13 = (unsigned short)31293;
int zero = 0;
signed char var_19 = (signed char)104;
unsigned short var_20 = (unsigned short)11287;
_Bool var_21 = (_Bool)0;
int var_22 = -1640642800;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
