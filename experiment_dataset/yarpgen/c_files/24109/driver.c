#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3912535792U;
unsigned int var_3 = 2358837290U;
_Bool var_5 = (_Bool)1;
long long int var_6 = 6691690249784068641LL;
unsigned int var_11 = 88619526U;
int zero = 0;
int var_12 = 2035380951;
unsigned short var_13 = (unsigned short)1307;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
