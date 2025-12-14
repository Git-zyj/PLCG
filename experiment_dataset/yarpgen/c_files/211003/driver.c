#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -869321611501960573LL;
unsigned char var_2 = (unsigned char)185;
signed char var_3 = (signed char)117;
signed char var_4 = (signed char)-22;
short var_8 = (short)6143;
unsigned short var_9 = (unsigned short)6659;
int var_12 = -1911974927;
int zero = 0;
short var_13 = (short)18207;
unsigned long long int var_14 = 734422053188132099ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
