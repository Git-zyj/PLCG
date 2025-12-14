#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned short var_2 = (unsigned short)56788;
long long int var_4 = -5331968675660373853LL;
unsigned long long int var_5 = 4592145125753633422ULL;
short var_6 = (short)11801;
unsigned long long int var_7 = 10683290085123347485ULL;
unsigned long long int var_8 = 5475039377900959283ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 4263902193U;
unsigned int var_14 = 3576564725U;
signed char var_16 = (signed char)89;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)25015;
unsigned long long int var_20 = 12343788599780097156ULL;
short var_21 = (short)-3263;
signed char var_22 = (signed char)105;
_Bool var_23 = (_Bool)1;
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
