#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5390408926331356915LL;
signed char var_2 = (signed char)117;
signed char var_4 = (signed char)-37;
long long int var_5 = -7243861117772405116LL;
unsigned long long int var_6 = 6902534734487461181ULL;
long long int var_8 = -6241879476523752578LL;
unsigned short var_9 = (unsigned short)24848;
short var_10 = (short)27840;
int zero = 0;
unsigned int var_11 = 283221429U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-1605;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
