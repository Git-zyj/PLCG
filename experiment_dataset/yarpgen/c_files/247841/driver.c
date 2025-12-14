#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30723;
unsigned long long int var_1 = 16451406245806367659ULL;
int var_2 = -1789628237;
signed char var_3 = (signed char)-62;
long long int var_4 = 6510005888287962337LL;
long long int var_5 = 816585190137521540LL;
int var_8 = -1584753632;
signed char var_10 = (signed char)9;
int zero = 0;
unsigned int var_11 = 2826602813U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-35;
void init() {
}

void checksum() {
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
