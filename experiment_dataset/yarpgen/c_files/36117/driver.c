#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)230;
unsigned long long int var_7 = 17504993109275279037ULL;
signed char var_8 = (signed char)-5;
int zero = 0;
long long int var_10 = -7683028457428602409LL;
unsigned short var_11 = (unsigned short)9289;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
