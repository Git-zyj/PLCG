#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30812;
_Bool var_2 = (_Bool)0;
int var_3 = 765766919;
signed char var_4 = (signed char)120;
signed char var_5 = (signed char)118;
signed char var_6 = (signed char)-24;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2417368604U;
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
