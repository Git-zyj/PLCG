#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7872;
unsigned int var_2 = 3862970304U;
unsigned short var_7 = (unsigned short)37852;
short var_9 = (short)24401;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 11939479227614149986ULL;
long long int var_12 = -6131556233145952291LL;
unsigned long long int var_13 = 18209795580167681037ULL;
long long int var_14 = 3632031884957194379LL;
void init() {
}

void checksum() {
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
