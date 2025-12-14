#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3107319651548774240LL;
unsigned short var_4 = (unsigned short)16293;
long long int var_6 = -1154041285701904646LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)13;
unsigned long long int var_15 = 10156948693658230386ULL;
int zero = 0;
signed char var_17 = (signed char)67;
short var_18 = (short)4250;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
