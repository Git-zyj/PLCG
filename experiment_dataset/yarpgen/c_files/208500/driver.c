#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4266671926U;
unsigned long long int var_2 = 9982063147048296700ULL;
int var_4 = 1690400828;
unsigned int var_5 = 2540095319U;
signed char var_11 = (signed char)-112;
_Bool var_12 = (_Bool)0;
short var_14 = (short)964;
int zero = 0;
short var_17 = (short)18322;
unsigned int var_18 = 849631648U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
