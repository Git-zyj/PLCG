#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1101025073103504550ULL;
short var_1 = (short)-1145;
long long int var_3 = 5307862001614283011LL;
unsigned long long int var_4 = 7414831118619818347ULL;
long long int var_5 = -3732916288137678877LL;
signed char var_7 = (signed char)107;
signed char var_8 = (signed char)-120;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)241;
int var_13 = 1953721088;
int zero = 0;
unsigned int var_14 = 372452787U;
int var_15 = 557430374;
_Bool var_16 = (_Bool)0;
int var_17 = -2081321559;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
