#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1537673198;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3437092731U;
unsigned char var_10 = (unsigned char)154;
int var_12 = 674381955;
unsigned int var_13 = 3195610656U;
long long int var_14 = 2594577638466965700LL;
unsigned int var_15 = 2798284994U;
int zero = 0;
signed char var_16 = (signed char)14;
unsigned int var_17 = 814618522U;
unsigned char var_18 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
