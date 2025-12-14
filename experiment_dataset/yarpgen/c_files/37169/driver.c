#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 4892126467880489494LL;
unsigned long long int var_4 = 9332520558784253730ULL;
unsigned char var_5 = (unsigned char)208;
unsigned long long int var_6 = 12537940286438014899ULL;
short var_7 = (short)-24281;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -8373737917819602622LL;
long long int var_11 = 3678563835341064137LL;
unsigned long long int var_12 = 18154285407217936105ULL;
unsigned long long int var_13 = 14818393075769868066ULL;
unsigned char var_14 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
