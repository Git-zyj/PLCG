#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56215;
_Bool var_3 = (_Bool)1;
long long int var_4 = 8898940494365168743LL;
unsigned short var_7 = (unsigned short)26483;
unsigned int var_8 = 1314150425U;
unsigned short var_10 = (unsigned short)64462;
int zero = 0;
unsigned long long int var_11 = 2044290414783750037ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-62;
signed char var_14 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
