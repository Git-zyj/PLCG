#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15914046783009522021ULL;
unsigned int var_4 = 2814202337U;
unsigned char var_7 = (unsigned char)58;
signed char var_8 = (signed char)-37;
unsigned long long int var_11 = 17350349789129043369ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-9634;
int var_15 = 1445336576;
unsigned int var_16 = 1313463185U;
unsigned long long int var_17 = 8821956830997776668ULL;
unsigned int var_18 = 1741995562U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
