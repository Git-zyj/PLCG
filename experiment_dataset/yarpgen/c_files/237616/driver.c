#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5547919007762108360ULL;
unsigned short var_3 = (unsigned short)24478;
_Bool var_4 = (_Bool)1;
long long int var_5 = -3307268489911381473LL;
unsigned short var_13 = (unsigned short)39368;
int zero = 0;
unsigned char var_15 = (unsigned char)46;
unsigned long long int var_16 = 7495820188076635557ULL;
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
