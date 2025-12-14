#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)90;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5254584011916331643ULL;
int zero = 0;
unsigned long long int var_19 = 17384224367792495091ULL;
unsigned char var_20 = (unsigned char)88;
long long int var_21 = 3221009798205201702LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
