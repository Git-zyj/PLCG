#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7190796042476565056LL;
unsigned short var_1 = (unsigned short)37749;
long long int var_3 = -2347255929781825569LL;
unsigned int var_4 = 343955180U;
int var_6 = 740281568;
unsigned int var_7 = 704071663U;
signed char var_8 = (signed char)68;
long long int var_9 = -3176150533933531133LL;
int var_10 = 902138023;
unsigned long long int var_11 = 6659138172593392056ULL;
int zero = 0;
signed char var_13 = (signed char)126;
long long int var_14 = -8158474321127689017LL;
int var_15 = 1902210898;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
