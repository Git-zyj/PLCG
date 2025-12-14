#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -166095300;
unsigned long long int var_2 = 9239049492153673248ULL;
signed char var_4 = (signed char)-5;
unsigned long long int var_5 = 9427820810467566620ULL;
unsigned char var_11 = (unsigned char)16;
long long int var_13 = -5246089417081460031LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)27178;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
