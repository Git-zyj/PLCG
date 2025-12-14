#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -400106215;
unsigned int var_3 = 1889102199U;
unsigned char var_4 = (unsigned char)152;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 16161568226122927242ULL;
unsigned long long int var_7 = 6501104224068909562ULL;
short var_9 = (short)-20537;
unsigned short var_10 = (unsigned short)19903;
unsigned char var_11 = (unsigned char)110;
unsigned char var_16 = (unsigned char)176;
long long int var_18 = 7576135778337472654LL;
int zero = 0;
long long int var_19 = -8542502266515206547LL;
signed char var_20 = (signed char)98;
long long int var_21 = -4861083110571773184LL;
unsigned char var_22 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
