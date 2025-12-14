#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4222040175671519095LL;
int var_3 = -2146514184;
unsigned long long int var_4 = 1817432329233951357ULL;
int var_5 = -806525503;
unsigned int var_6 = 3292269889U;
unsigned long long int var_8 = 13421168423639111795ULL;
unsigned char var_9 = (unsigned char)102;
int zero = 0;
unsigned int var_10 = 3105347416U;
unsigned long long int var_11 = 6165366837908192048ULL;
int var_12 = 2069576777;
long long int var_13 = -1321210715988841441LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
