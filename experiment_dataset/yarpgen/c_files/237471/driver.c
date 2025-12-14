#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)151;
signed char var_5 = (signed char)111;
_Bool var_6 = (_Bool)1;
unsigned short var_13 = (unsigned short)30750;
long long int var_18 = 706439345746171848LL;
int zero = 0;
signed char var_19 = (signed char)-12;
long long int var_20 = 2679197995161841996LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
