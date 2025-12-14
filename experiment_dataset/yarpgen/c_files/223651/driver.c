#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 2014786573373214722ULL;
long long int var_3 = 6156020619827578341LL;
unsigned long long int var_6 = 12360626975730858193ULL;
unsigned short var_7 = (unsigned short)45884;
long long int var_8 = -6808469120966303280LL;
int var_9 = -920272067;
unsigned short var_13 = (unsigned short)61404;
unsigned int var_14 = 263617188U;
unsigned char var_15 = (unsigned char)125;
unsigned int var_17 = 243586589U;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = -395161358;
unsigned long long int var_20 = 2670735623498119698ULL;
unsigned char var_21 = (unsigned char)184;
long long int var_22 = 7173035839041901563LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
