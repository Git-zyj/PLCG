#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1275099240025470501LL;
unsigned char var_3 = (unsigned char)175;
long long int var_4 = 1884021994914186827LL;
long long int var_15 = 1610497236612923016LL;
int zero = 0;
long long int var_20 = 5976405085722584334LL;
long long int var_21 = 4644020622164741023LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
