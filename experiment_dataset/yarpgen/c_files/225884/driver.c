#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3460398341239578526LL;
long long int var_2 = 7277736121076769516LL;
short var_7 = (short)-21953;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 280713455U;
long long int var_18 = 5923603912032058456LL;
long long int var_19 = -3846001742618406950LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
