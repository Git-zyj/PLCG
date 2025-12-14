#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -646501504280364799LL;
unsigned char var_2 = (unsigned char)54;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10542444478436410336ULL;
long long int var_5 = -4743526784744608096LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3259360367U;
signed char var_8 = (signed char)-123;
unsigned int var_10 = 4249419272U;
int zero = 0;
unsigned long long int var_11 = 12136490293261833707ULL;
long long int var_12 = 5484206483659837807LL;
short var_13 = (short)8850;
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
