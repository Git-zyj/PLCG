#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4444203402264487802ULL;
long long int var_4 = 1432079132926596579LL;
unsigned long long int var_8 = 9556992917950471378ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_19 = (unsigned char)94;
int zero = 0;
short var_20 = (short)-23565;
short var_21 = (short)3449;
unsigned long long int var_22 = 6739483600056750160ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
