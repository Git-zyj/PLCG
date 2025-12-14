#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)54257;
signed char var_9 = (signed char)52;
signed char var_10 = (signed char)-19;
signed char var_13 = (signed char)-74;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5975648024319252864ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)39126;
unsigned char var_18 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
