#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)23;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)6947;
long long int var_8 = -6567171016624556931LL;
unsigned int var_9 = 806976036U;
long long int var_10 = 293543392137586697LL;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 240498353U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5780149485371989702ULL;
int zero = 0;
int var_18 = -519469155;
long long int var_19 = 8719342385646727827LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
