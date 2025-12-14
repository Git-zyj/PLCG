#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 2057465400995382616ULL;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
unsigned long long int var_18 = 18267566338404354152ULL;
unsigned short var_19 = (unsigned short)63493;
unsigned long long int var_20 = 11930830457618589152ULL;
void init() {
}

void checksum() {
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
