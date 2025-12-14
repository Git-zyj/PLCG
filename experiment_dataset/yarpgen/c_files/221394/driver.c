#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11818956312935169161ULL;
long long int var_3 = -1036483879593213707LL;
unsigned int var_6 = 198750515U;
unsigned long long int var_12 = 2274876997421963816ULL;
unsigned long long int var_15 = 12066101368403482754ULL;
unsigned char var_16 = (unsigned char)201;
int zero = 0;
unsigned char var_18 = (unsigned char)58;
unsigned long long int var_19 = 13289090093579985103ULL;
unsigned int var_20 = 2780065222U;
unsigned short var_21 = (unsigned short)39740;
unsigned int var_22 = 3562557302U;
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
