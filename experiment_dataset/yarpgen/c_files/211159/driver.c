#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11667515636296538472ULL;
unsigned long long int var_3 = 1762864479121326912ULL;
unsigned int var_4 = 1667331396U;
int var_5 = 1691044865;
int var_6 = 2072844495;
unsigned long long int var_7 = 804788103323518123ULL;
unsigned long long int var_11 = 919848800998147123ULL;
int zero = 0;
unsigned long long int var_17 = 8892230985333953563ULL;
unsigned long long int var_18 = 7303071580816170748ULL;
unsigned long long int var_19 = 9561826479519206196ULL;
unsigned short var_20 = (unsigned short)44505;
void init() {
}

void checksum() {
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
