#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)68;
signed char var_6 = (signed char)-69;
signed char var_7 = (signed char)125;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)19325;
signed char var_15 = (signed char)31;
int zero = 0;
signed char var_16 = (signed char)-96;
unsigned short var_17 = (unsigned short)54271;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-25;
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
