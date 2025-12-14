#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5369895732980133887ULL;
int var_1 = -1016177875;
unsigned int var_4 = 2086340652U;
signed char var_5 = (signed char)-43;
int var_6 = -1206711873;
int var_8 = 1029678577;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1743228937;
unsigned int var_13 = 367490279U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
