#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16228770968173404429ULL;
unsigned int var_1 = 1542827538U;
unsigned long long int var_3 = 17014128900957724667ULL;
unsigned long long int var_4 = 10933221220853576479ULL;
unsigned short var_8 = (unsigned short)6364;
unsigned int var_9 = 3854601037U;
unsigned long long int var_11 = 5695978065336143091ULL;
unsigned int var_12 = 1590462348U;
int zero = 0;
unsigned long long int var_13 = 13105541851954382238ULL;
unsigned int var_14 = 1061416426U;
signed char var_15 = (signed char)10;
unsigned char var_16 = (unsigned char)0;
unsigned int var_17 = 1785743737U;
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
