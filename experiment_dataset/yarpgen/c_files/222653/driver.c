#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3850204607U;
int var_4 = 37669166;
_Bool var_6 = (_Bool)1;
long long int var_8 = 70584583732241046LL;
unsigned int var_12 = 1544220786U;
signed char var_14 = (signed char)51;
int zero = 0;
long long int var_15 = -5288762585588563956LL;
unsigned char var_16 = (unsigned char)82;
void init() {
}

void checksum() {
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
