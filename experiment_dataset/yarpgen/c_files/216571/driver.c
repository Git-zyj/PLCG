#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7950024298752513278LL;
signed char var_3 = (signed char)15;
short var_5 = (short)8733;
long long int var_6 = 6819599131431995223LL;
unsigned char var_7 = (unsigned char)87;
signed char var_8 = (signed char)77;
unsigned long long int var_10 = 14145153998232486234ULL;
int var_11 = 795821700;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-20722;
int zero = 0;
unsigned long long int var_15 = 1664733098693834926ULL;
unsigned long long int var_16 = 4472170466628278075ULL;
long long int var_17 = -9054158339027067849LL;
long long int var_18 = -8621902157483752254LL;
long long int var_19 = -7333120831541323995LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
