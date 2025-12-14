#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3113996237U;
int var_2 = 1112617172;
int var_5 = 1161715103;
unsigned int var_7 = 688325125U;
unsigned int var_8 = 1092636361U;
int zero = 0;
int var_12 = 567295837;
long long int var_13 = 62900133302481488LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3385724396U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
