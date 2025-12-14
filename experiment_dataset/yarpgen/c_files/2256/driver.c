#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30218;
long long int var_1 = 4283232706725632344LL;
signed char var_2 = (signed char)17;
unsigned short var_5 = (unsigned short)60185;
unsigned long long int var_7 = 9701585900215466673ULL;
unsigned long long int var_8 = 16871754660008860089ULL;
int zero = 0;
signed char var_10 = (signed char)26;
_Bool var_11 = (_Bool)1;
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
