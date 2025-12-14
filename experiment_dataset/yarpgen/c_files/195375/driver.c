#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18585;
short var_8 = (short)4003;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)25006;
short var_14 = (short)10931;
unsigned int var_16 = 4249250269U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)19340;
unsigned int var_19 = 2621916988U;
unsigned char var_20 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
