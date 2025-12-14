#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5207634101432789016LL;
unsigned long long int var_2 = 13643600699421421609ULL;
long long int var_5 = 260689016498242068LL;
unsigned char var_11 = (unsigned char)134;
unsigned char var_14 = (unsigned char)212;
long long int var_15 = -1784003607765211658LL;
int zero = 0;
long long int var_16 = 1920411070764254530LL;
unsigned char var_17 = (unsigned char)229;
unsigned int var_18 = 3404952390U;
long long int var_19 = 6040406883041273673LL;
unsigned int var_20 = 1224583432U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
