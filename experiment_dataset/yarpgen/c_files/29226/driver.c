#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)43;
unsigned int var_9 = 2902669009U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)180;
short var_19 = (short)-22429;
long long int var_20 = 4794848846712352080LL;
short var_21 = (short)7932;
void init() {
}

void checksum() {
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
