#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2175375026U;
long long int var_1 = -1459993893584993608LL;
unsigned int var_3 = 1966040926U;
signed char var_7 = (signed char)-118;
unsigned long long int var_8 = 8928168479178463830ULL;
int var_9 = -1595732236;
int zero = 0;
signed char var_13 = (signed char)-41;
unsigned long long int var_14 = 1613353578142433439ULL;
unsigned char var_15 = (unsigned char)210;
unsigned long long int var_16 = 14033849832988877199ULL;
long long int var_17 = -949168691155639574LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
