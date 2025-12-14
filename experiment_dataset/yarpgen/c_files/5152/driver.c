#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4993373433333715936LL;
unsigned char var_8 = (unsigned char)64;
int zero = 0;
long long int var_16 = 8017075060099530289LL;
short var_17 = (short)-7838;
int var_18 = -1598724740;
unsigned char var_19 = (unsigned char)216;
_Bool var_20 = (_Bool)1;
int var_21 = 91884809;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
