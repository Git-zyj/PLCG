#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7657847915574069619LL;
long long int var_1 = 1189099498488317243LL;
_Bool var_3 = (_Bool)1;
int zero = 0;
long long int var_12 = -2067232115632273651LL;
long long int var_13 = 3765629406140291249LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
