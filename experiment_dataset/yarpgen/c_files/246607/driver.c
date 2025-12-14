#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45561;
signed char var_5 = (signed char)-89;
unsigned short var_8 = (unsigned short)23012;
unsigned long long int var_9 = 13831550901416285660ULL;
int zero = 0;
unsigned long long int var_10 = 17180914390365064874ULL;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
