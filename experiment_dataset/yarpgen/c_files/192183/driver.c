#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11053038055682765351ULL;
long long int var_1 = 6187283532483370259LL;
short var_5 = (short)-15916;
long long int var_7 = 3694864785062004482LL;
short var_12 = (short)25090;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1400113681802301705LL;
long long int var_17 = 4020088837111028526LL;
int zero = 0;
short var_20 = (short)-20369;
unsigned char var_21 = (unsigned char)150;
unsigned char var_22 = (unsigned char)52;
long long int var_23 = 2414628000217565802LL;
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
