#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
_Bool var_1 = (_Bool)1;
unsigned long long int var_8 = 7826479523768686194ULL;
int var_11 = 1330671509;
int zero = 0;
long long int var_13 = -1222913974933007388LL;
unsigned short var_14 = (unsigned short)24829;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
