#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13534;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)61341;
signed char var_6 = (signed char)-82;
int var_7 = -627564383;
signed char var_10 = (signed char)-52;
short var_11 = (short)-3685;
unsigned long long int var_12 = 15857041979081131872ULL;
int zero = 0;
long long int var_13 = 1269609211919875632LL;
unsigned short var_14 = (unsigned short)55971;
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
