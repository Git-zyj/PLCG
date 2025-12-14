#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6730765529887326015LL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2159433340U;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)-74;
signed char var_12 = (signed char)-44;
unsigned short var_15 = (unsigned short)47559;
int zero = 0;
signed char var_16 = (signed char)51;
short var_17 = (short)24541;
signed char var_18 = (signed char)49;
int var_19 = -949754959;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
