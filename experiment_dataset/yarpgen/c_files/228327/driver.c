#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1310952068;
long long int var_7 = 7482139710164426130LL;
signed char var_8 = (signed char)-70;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)41989;
signed char var_18 = (signed char)5;
long long int var_19 = -3006345712516099904LL;
void init() {
}

void checksum() {
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
