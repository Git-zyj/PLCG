#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8034223311525127093ULL;
_Bool var_7 = (_Bool)1;
int var_11 = -1464392655;
long long int var_12 = 4204033651088266154LL;
int zero = 0;
signed char var_18 = (signed char)25;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)31732;
_Bool var_21 = (_Bool)1;
int var_22 = 1951851855;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
