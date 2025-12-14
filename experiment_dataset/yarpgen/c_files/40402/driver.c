#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3125054233U;
unsigned short var_4 = (unsigned short)25240;
unsigned short var_5 = (unsigned short)54871;
long long int var_6 = 6386247792248523986LL;
long long int var_7 = -4658873872075922987LL;
unsigned short var_8 = (unsigned short)32165;
unsigned int var_9 = 2456567584U;
int zero = 0;
unsigned int var_10 = 3023961076U;
signed char var_11 = (signed char)88;
signed char var_12 = (signed char)76;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
