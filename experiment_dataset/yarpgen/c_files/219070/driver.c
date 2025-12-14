#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49961;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)57;
_Bool var_9 = (_Bool)0;
long long int var_10 = -5689225484052049754LL;
short var_12 = (short)23300;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = -2776880761565908435LL;
int var_16 = -1637356095;
unsigned short var_17 = (unsigned short)55335;
unsigned long long int var_18 = 1468811705561497464ULL;
long long int var_19 = 8015030929184184657LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
