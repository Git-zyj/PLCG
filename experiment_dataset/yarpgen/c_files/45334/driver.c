#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 3733658025861353612ULL;
unsigned long long int var_13 = 15635055055997044451ULL;
long long int var_16 = -8558490135529084697LL;
int zero = 0;
unsigned int var_20 = 3831892332U;
unsigned int var_21 = 879771397U;
unsigned short var_22 = (unsigned short)23804;
unsigned int var_23 = 3333587209U;
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
