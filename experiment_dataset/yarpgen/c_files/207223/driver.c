#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)56464;
unsigned long long int var_2 = 144700197967855424ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 358059568U;
signed char var_7 = (signed char)-124;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)32128;
signed char var_11 = (signed char)101;
int zero = 0;
unsigned long long int var_12 = 4145201063407384851ULL;
long long int var_13 = -4646160944714180890LL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4562337727749429302ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
