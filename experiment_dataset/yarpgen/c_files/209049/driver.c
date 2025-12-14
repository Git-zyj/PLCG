#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22874;
unsigned long long int var_2 = 3860935372317006614ULL;
unsigned char var_7 = (unsigned char)7;
unsigned long long int var_8 = 12199127352620210277ULL;
unsigned char var_14 = (unsigned char)16;
unsigned long long int var_15 = 1264467194815823479ULL;
unsigned char var_17 = (unsigned char)177;
int zero = 0;
unsigned short var_19 = (unsigned short)9693;
unsigned long long int var_20 = 17451930410976150602ULL;
unsigned long long int var_21 = 6983019384391783033ULL;
unsigned long long int var_22 = 8638522382586808046ULL;
unsigned long long int var_23 = 7600017691521428422ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
