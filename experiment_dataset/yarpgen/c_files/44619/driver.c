#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)84;
unsigned int var_7 = 3637545987U;
long long int var_9 = -3041181325222588228LL;
unsigned char var_11 = (unsigned char)251;
int zero = 0;
signed char var_12 = (signed char)-37;
unsigned short var_13 = (unsigned short)1726;
signed char var_14 = (signed char)93;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
