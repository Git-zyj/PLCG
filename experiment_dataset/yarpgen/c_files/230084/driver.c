#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 3378797593923254127ULL;
unsigned short var_11 = (unsigned short)59553;
unsigned char var_14 = (unsigned char)94;
signed char var_15 = (signed char)-58;
short var_18 = (short)3869;
int var_19 = -2060459709;
int zero = 0;
unsigned char var_20 = (unsigned char)77;
long long int var_21 = -4499017315997534127LL;
signed char var_22 = (signed char)-58;
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
