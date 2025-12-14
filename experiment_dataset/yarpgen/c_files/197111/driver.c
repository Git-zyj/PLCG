#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4257609212U;
_Bool var_4 = (_Bool)0;
long long int var_5 = 2727099582986355018LL;
long long int var_6 = 2608032953790339361LL;
signed char var_7 = (signed char)41;
unsigned char var_8 = (unsigned char)57;
signed char var_13 = (signed char)-35;
int zero = 0;
long long int var_14 = -1614832852195019172LL;
unsigned char var_15 = (unsigned char)119;
int var_16 = -1928763441;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
