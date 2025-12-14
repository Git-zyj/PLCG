#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3458485018364942340ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 712206177U;
unsigned short var_5 = (unsigned short)40207;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3173169928U;
long long int var_10 = -8646928164864433659LL;
unsigned short var_11 = (unsigned short)27920;
signed char var_16 = (signed char)5;
int var_17 = 2132319902;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 2261069797024755991ULL;
signed char var_20 = (signed char)74;
long long int var_21 = 2442550440013937262LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
