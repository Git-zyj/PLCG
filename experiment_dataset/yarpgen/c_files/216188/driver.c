#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)11345;
unsigned long long int var_7 = 3606120272946056825ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1259438147544735872ULL;
unsigned int var_19 = 1382188512U;
int zero = 0;
long long int var_20 = 6267258759482706021LL;
signed char var_21 = (signed char)-120;
signed char var_22 = (signed char)8;
signed char var_23 = (signed char)-21;
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
