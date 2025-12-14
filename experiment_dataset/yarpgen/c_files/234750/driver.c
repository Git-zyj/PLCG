#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48212;
signed char var_2 = (signed char)85;
int var_4 = 17773657;
unsigned long long int var_9 = 14193758244955017792ULL;
unsigned short var_16 = (unsigned short)3980;
int zero = 0;
int var_18 = 1500602851;
int var_19 = 388312258;
void init() {
}

void checksum() {
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
