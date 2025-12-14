#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5467055469363783867LL;
int var_7 = 1906107547;
unsigned int var_9 = 572836403U;
_Bool var_10 = (_Bool)1;
unsigned short var_18 = (unsigned short)377;
int zero = 0;
signed char var_19 = (signed char)-46;
unsigned int var_20 = 1193246598U;
_Bool var_21 = (_Bool)1;
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
