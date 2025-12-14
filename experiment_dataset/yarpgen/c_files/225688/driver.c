#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6616570153820160236ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)12163;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 913775627U;
signed char var_9 = (signed char)121;
unsigned char var_10 = (unsigned char)141;
unsigned long long int var_14 = 15679835868120953891ULL;
int zero = 0;
long long int var_15 = -7647263968384667785LL;
long long int var_16 = 1997660077201093247LL;
unsigned int var_17 = 1193874521U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
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
