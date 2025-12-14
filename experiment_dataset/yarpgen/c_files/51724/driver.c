#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 13824637993775304231ULL;
unsigned short var_9 = (unsigned short)9123;
long long int var_10 = -8223071112400043468LL;
long long int var_14 = 1629426010855613376LL;
int zero = 0;
short var_15 = (short)14674;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9949723754164440893ULL;
unsigned char var_18 = (unsigned char)50;
_Bool var_19 = (_Bool)1;
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
