#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)50717;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-2838;
unsigned short var_9 = (unsigned short)32165;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1900661290627495647ULL;
long long int var_14 = 3871545981442745682LL;
long long int var_15 = 106036130426439703LL;
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
