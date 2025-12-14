#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11859991757768426546ULL;
short var_2 = (short)-12510;
int var_7 = -979419639;
unsigned long long int var_8 = 11411353152983543075ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)43690;
unsigned int var_18 = 591527344U;
int zero = 0;
int var_19 = 184309475;
long long int var_20 = -6261026739040144297LL;
unsigned short var_21 = (unsigned short)39186;
unsigned int var_22 = 1636709969U;
short var_23 = (short)15365;
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
