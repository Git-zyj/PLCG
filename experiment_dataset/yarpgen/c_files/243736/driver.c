#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 259103411U;
_Bool var_4 = (_Bool)0;
unsigned int var_10 = 3693733640U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 4482225331756626091ULL;
int var_21 = -434578932;
unsigned long long int var_22 = 7214178545197612463ULL;
unsigned int var_23 = 4245300576U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
