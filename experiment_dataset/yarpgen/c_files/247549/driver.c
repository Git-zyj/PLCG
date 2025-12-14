#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = 660422453;
unsigned long long int var_7 = 3423087960178582918ULL;
unsigned short var_9 = (unsigned short)54855;
unsigned int var_10 = 673750378U;
int zero = 0;
unsigned long long int var_11 = 14075490131317519523ULL;
short var_12 = (short)-26260;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
