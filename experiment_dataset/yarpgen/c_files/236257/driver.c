#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1068565984U;
unsigned long long int var_5 = 15827987900467942337ULL;
unsigned long long int var_7 = 424278603498318501ULL;
unsigned long long int var_8 = 4270880527929954120ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 11723613917944907638ULL;
unsigned short var_14 = (unsigned short)35661;
int zero = 0;
unsigned short var_16 = (unsigned short)4476;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1132571698U;
unsigned long long int var_19 = 2037148370090846119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
