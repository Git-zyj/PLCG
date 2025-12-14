#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7930;
int var_2 = -1477136634;
unsigned long long int var_3 = 17271016914481055981ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 7205737072178577935LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)47;
unsigned char var_9 = (unsigned char)125;
int zero = 0;
unsigned char var_10 = (unsigned char)137;
unsigned int var_11 = 54845942U;
signed char var_12 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
