#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4105197707U;
long long int var_2 = -3553590344899099767LL;
unsigned int var_3 = 3169592420U;
unsigned int var_4 = 3994251587U;
unsigned long long int var_5 = 5309165018798045511ULL;
unsigned char var_6 = (unsigned char)11;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 469886064U;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3796537978369221224LL;
unsigned short var_12 = (unsigned short)36651;
signed char var_13 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
