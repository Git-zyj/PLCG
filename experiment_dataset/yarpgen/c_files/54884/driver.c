#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)-24471;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3140280795U;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)216;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 2565605822U;
unsigned int var_16 = 657968715U;
int zero = 0;
unsigned int var_17 = 2807764577U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4393106742168792751LL;
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
