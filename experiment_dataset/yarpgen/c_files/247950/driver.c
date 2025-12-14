#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)52127;
unsigned int var_12 = 4158428730U;
unsigned long long int var_14 = 3776170157162503143ULL;
int zero = 0;
unsigned int var_16 = 3622410475U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2389283038U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
