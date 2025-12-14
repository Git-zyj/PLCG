#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31283;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_13 = (signed char)-10;
unsigned long long int var_16 = 14470002808693790102ULL;
int zero = 0;
unsigned int var_18 = 1931143812U;
short var_19 = (short)25747;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
