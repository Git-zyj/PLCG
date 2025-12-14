#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1324670135U;
unsigned int var_10 = 3071177741U;
long long int var_12 = 8744147003187343530LL;
_Bool var_13 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)18629;
long long int var_21 = -2905990856276651100LL;
unsigned short var_22 = (unsigned short)48578;
void init() {
}

void checksum() {
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
