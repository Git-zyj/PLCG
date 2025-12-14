#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
int var_1 = 323629285;
int var_2 = 1535542924;
_Bool var_4 = (_Bool)0;
int var_5 = 850640362;
unsigned long long int var_14 = 17397990889750691180ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_19 = -1080602402;
unsigned int var_20 = 3221718467U;
signed char var_21 = (signed char)-18;
int var_22 = -529757278;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
