#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)39057;
unsigned char var_5 = (unsigned char)221;
unsigned short var_8 = (unsigned short)57844;
unsigned long long int var_12 = 970112890531956958ULL;
int zero = 0;
unsigned long long int var_16 = 6592295522547566185ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7375391137422652045ULL;
long long int var_19 = 6516991392636965339LL;
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
