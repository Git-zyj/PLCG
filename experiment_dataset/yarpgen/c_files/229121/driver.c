#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 265361595946802121LL;
unsigned long long int var_6 = 1322863725294478325ULL;
unsigned int var_10 = 2552072504U;
unsigned char var_13 = (unsigned char)250;
int var_16 = -1889437820;
short var_17 = (short)-24815;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)102;
unsigned short var_21 = (unsigned short)47246;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
