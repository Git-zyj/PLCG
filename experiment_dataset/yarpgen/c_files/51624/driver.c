#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16568622717776387038ULL;
short var_1 = (short)13383;
unsigned long long int var_10 = 7983650465453593513ULL;
long long int var_11 = 257285278724155256LL;
short var_12 = (short)747;
unsigned long long int var_14 = 7984355711801359837ULL;
short var_18 = (short)20044;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4661028769522034069ULL;
unsigned char var_21 = (unsigned char)245;
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
