#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4931870770016761115LL;
int var_8 = 1190569808;
short var_9 = (short)10563;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)15006;
long long int var_21 = -312839628231317145LL;
void init() {
}

void checksum() {
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
