#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3580675714754235323LL;
long long int var_3 = 5943196914195655406LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 9021066726113567969LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -8555168332690735185LL;
int zero = 0;
short var_12 = (short)-25600;
unsigned short var_13 = (unsigned short)64366;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
