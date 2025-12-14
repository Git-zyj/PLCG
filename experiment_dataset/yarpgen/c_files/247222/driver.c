#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)27;
unsigned short var_7 = (unsigned short)20602;
long long int var_18 = -5696496502558080699LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-92;
unsigned short var_22 = (unsigned short)57016;
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
