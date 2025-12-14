#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned long long int var_2 = 5184211368197995866ULL;
long long int var_4 = -210878894794636836LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)611;
unsigned long long int var_13 = 17072666011327066529ULL;
signed char var_15 = (signed char)96;
int zero = 0;
long long int var_16 = -2228338839167721855LL;
short var_17 = (short)11078;
unsigned char var_18 = (unsigned char)244;
int var_19 = 1160597763;
void init() {
}

void checksum() {
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
