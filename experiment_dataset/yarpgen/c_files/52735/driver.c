#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3633176455U;
unsigned long long int var_3 = 11344572864471279914ULL;
unsigned short var_8 = (unsigned short)46171;
signed char var_11 = (signed char)-62;
int zero = 0;
short var_17 = (short)-11484;
signed char var_18 = (signed char)-35;
short var_19 = (short)-15294;
_Bool var_20 = (_Bool)1;
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
