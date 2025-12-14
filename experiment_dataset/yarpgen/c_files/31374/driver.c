#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9422848095043647063ULL;
signed char var_4 = (signed char)-71;
long long int var_5 = 7754448560471550212LL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)134;
signed char var_14 = (signed char)-39;
short var_16 = (short)14386;
int zero = 0;
unsigned char var_18 = (unsigned char)4;
short var_19 = (short)32451;
unsigned short var_20 = (unsigned short)28679;
int var_21 = -1777022389;
unsigned long long int var_22 = 5464079620946052820ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
