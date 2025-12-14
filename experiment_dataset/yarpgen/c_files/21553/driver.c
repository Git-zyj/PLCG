#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43797;
signed char var_7 = (signed char)-113;
signed char var_8 = (signed char)-102;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)26414;
unsigned long long int var_20 = 10058015078002429797ULL;
short var_21 = (short)3212;
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
