#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6959259239827167001ULL;
unsigned int var_1 = 2086203526U;
int var_3 = -1481583927;
signed char var_4 = (signed char)-104;
unsigned char var_6 = (unsigned char)151;
signed char var_7 = (signed char)103;
signed char var_8 = (signed char)121;
int zero = 0;
signed char var_10 = (signed char)75;
signed char var_11 = (signed char)-53;
signed char var_12 = (signed char)-67;
unsigned int var_13 = 1133895574U;
unsigned long long int var_14 = 447010641790050501ULL;
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
