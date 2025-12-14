#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4243;
signed char var_2 = (signed char)-18;
unsigned long long int var_6 = 4188997523975738004ULL;
unsigned long long int var_9 = 7296906475615117670ULL;
short var_10 = (short)12833;
short var_11 = (short)22411;
signed char var_12 = (signed char)51;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
signed char var_14 = (signed char)-99;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
