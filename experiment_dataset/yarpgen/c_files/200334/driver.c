#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)64;
unsigned long long int var_4 = 2246432264444943090ULL;
unsigned short var_6 = (unsigned short)42727;
_Bool var_8 = (_Bool)1;
unsigned short var_16 = (unsigned short)3640;
unsigned short var_17 = (unsigned short)19218;
long long int var_18 = 4738086391025407447LL;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
unsigned short var_21 = (unsigned short)31134;
signed char var_22 = (signed char)-25;
unsigned long long int var_23 = 15201827907980002111ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
