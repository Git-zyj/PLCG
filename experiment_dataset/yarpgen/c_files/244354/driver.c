#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10849;
unsigned int var_3 = 2614434318U;
_Bool var_7 = (_Bool)1;
int var_10 = -1861837302;
long long int var_12 = -6969912825000271886LL;
unsigned long long int var_17 = 10429810156513221288ULL;
int zero = 0;
long long int var_18 = -6406686861675148336LL;
unsigned int var_19 = 3982324440U;
int var_20 = -1238126293;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
