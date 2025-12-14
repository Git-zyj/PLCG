#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10916;
short var_1 = (short)-5260;
unsigned short var_2 = (unsigned short)54603;
long long int var_4 = 4953548730969940679LL;
long long int var_6 = 6227447798414490782LL;
unsigned short var_7 = (unsigned short)53343;
unsigned char var_10 = (unsigned char)13;
unsigned long long int var_11 = 12549036458130048032ULL;
int zero = 0;
short var_12 = (short)6720;
unsigned long long int var_13 = 12292235252986263939ULL;
unsigned char var_14 = (unsigned char)8;
long long int var_15 = 3531668949981274661LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
