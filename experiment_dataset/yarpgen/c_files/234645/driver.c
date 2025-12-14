#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned long long int var_2 = 15044960296404390003ULL;
unsigned short var_6 = (unsigned short)56428;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 2853615741279425369ULL;
int zero = 0;
unsigned long long int var_15 = 2597715530953664640ULL;
int var_16 = -361388499;
void init() {
}

void checksum() {
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
