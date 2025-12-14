#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1192954337215755740ULL;
unsigned long long int var_5 = 4811390553869613189ULL;
int var_6 = 297396906;
signed char var_7 = (signed char)45;
unsigned int var_14 = 2897452945U;
short var_18 = (short)4848;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)172;
unsigned int var_21 = 342916559U;
int var_22 = 1958399057;
unsigned int var_23 = 990936628U;
unsigned char var_24 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
