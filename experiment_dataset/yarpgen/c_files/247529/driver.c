#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
long long int var_4 = -2700694205915700045LL;
signed char var_5 = (signed char)98;
short var_6 = (short)-10683;
_Bool var_11 = (_Bool)1;
long long int var_15 = -6337276193498065239LL;
int zero = 0;
signed char var_16 = (signed char)-18;
short var_17 = (short)26775;
unsigned short var_18 = (unsigned short)9147;
void init() {
}

void checksum() {
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
