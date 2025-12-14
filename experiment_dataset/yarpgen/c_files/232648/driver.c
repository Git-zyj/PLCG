#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)18705;
short var_4 = (short)6748;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16722933744488376451ULL;
int var_9 = -1423841644;
signed char var_10 = (signed char)9;
int zero = 0;
unsigned int var_11 = 3710319306U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
