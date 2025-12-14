#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
int var_3 = -1739015369;
unsigned long long int var_4 = 6250288508080090790ULL;
long long int var_6 = 8926585114028142336LL;
signed char var_8 = (signed char)-7;
int zero = 0;
unsigned int var_11 = 3817469732U;
signed char var_12 = (signed char)118;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)43432;
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
