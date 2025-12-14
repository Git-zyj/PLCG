#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 8483500308372630025ULL;
unsigned long long int var_5 = 1964562935796013362ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -2914476939621349669LL;
unsigned long long int var_12 = 9301843761717467998ULL;
unsigned char var_13 = (unsigned char)1;
unsigned short var_14 = (unsigned short)57132;
unsigned short var_15 = (unsigned short)40120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
