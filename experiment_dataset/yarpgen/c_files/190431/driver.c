#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_6 = -1710784864;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)26064;
short var_14 = (short)-19657;
int zero = 0;
short var_18 = (short)29279;
long long int var_19 = 4484002207287675173LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
