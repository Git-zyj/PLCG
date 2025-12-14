#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 120326707U;
short var_2 = (short)29668;
unsigned long long int var_7 = 15491683716670895297ULL;
unsigned char var_8 = (unsigned char)14;
unsigned short var_10 = (unsigned short)41608;
unsigned short var_15 = (unsigned short)49651;
int zero = 0;
long long int var_16 = 6122338710347264749LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
