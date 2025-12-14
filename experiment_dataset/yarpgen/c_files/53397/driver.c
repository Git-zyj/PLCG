#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1372252620;
unsigned char var_1 = (unsigned char)143;
unsigned short var_3 = (unsigned short)59892;
_Bool var_6 = (_Bool)0;
int var_8 = 711119104;
long long int var_9 = 6816773127660741704LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)92;
long long int var_12 = -4802256614018177364LL;
signed char var_13 = (signed char)37;
int zero = 0;
unsigned long long int var_14 = 10467744666161724605ULL;
_Bool var_15 = (_Bool)0;
int var_16 = -450322877;
signed char var_17 = (signed char)14;
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
