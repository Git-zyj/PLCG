#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
long long int var_2 = -7311792139201284221LL;
unsigned long long int var_3 = 15487321924885272344ULL;
long long int var_5 = -5659721130070521935LL;
unsigned char var_15 = (unsigned char)162;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 3310389896U;
int zero = 0;
long long int var_20 = -5340950889648847900LL;
unsigned int var_21 = 162954849U;
_Bool var_22 = (_Bool)0;
long long int var_23 = -6413709453865032485LL;
void init() {
}

void checksum() {
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
