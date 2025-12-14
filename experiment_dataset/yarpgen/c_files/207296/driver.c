#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3644869201U;
unsigned int var_3 = 463662959U;
signed char var_6 = (signed char)-114;
unsigned char var_7 = (unsigned char)148;
long long int var_11 = 1303276076398033559LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-39;
signed char var_16 = (signed char)-123;
long long int var_17 = 2796798697920008330LL;
int zero = 0;
signed char var_18 = (signed char)84;
signed char var_19 = (signed char)123;
void init() {
}

void checksum() {
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
