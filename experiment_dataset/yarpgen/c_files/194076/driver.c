#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)180;
unsigned long long int var_10 = 17303579223696911831ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)20460;
int zero = 0;
signed char var_16 = (signed char)44;
int var_17 = -1059679100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
