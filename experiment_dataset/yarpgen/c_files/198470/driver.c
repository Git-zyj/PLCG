#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47226;
_Bool var_6 = (_Bool)0;
short var_7 = (short)815;
unsigned short var_8 = (unsigned short)16399;
unsigned short var_9 = (unsigned short)24248;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-816;
int zero = 0;
signed char var_19 = (signed char)120;
short var_20 = (short)17402;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 11302987673149621145ULL;
long long int var_23 = -377499276327586851LL;
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
