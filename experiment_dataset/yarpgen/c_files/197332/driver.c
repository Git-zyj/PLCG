#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44816;
unsigned long long int var_2 = 5246900660443084724ULL;
unsigned long long int var_4 = 10261170589046964352ULL;
signed char var_5 = (signed char)-100;
int zero = 0;
unsigned int var_14 = 3718155808U;
unsigned long long int var_15 = 10303789779422960119ULL;
unsigned long long int var_16 = 15415919017794449784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
