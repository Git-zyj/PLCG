#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1785364101;
unsigned long long int var_3 = 5264626099273095204ULL;
unsigned long long int var_4 = 17610462259323779388ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3320303136U;
long long int var_9 = -1059763758839579578LL;
unsigned char var_11 = (unsigned char)173;
short var_13 = (short)11335;
unsigned short var_14 = (unsigned short)25102;
int var_15 = -1976624638;
unsigned short var_16 = (unsigned short)1025;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 1622832258;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
