#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2924248867U;
unsigned short var_2 = (unsigned short)60791;
unsigned short var_3 = (unsigned short)37797;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)43125;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 179016995U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 667580893U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
