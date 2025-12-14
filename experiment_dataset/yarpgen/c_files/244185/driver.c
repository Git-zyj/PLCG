#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_6 = -6726405924709407860LL;
signed char var_9 = (signed char)100;
long long int var_13 = 886633627844462260LL;
unsigned int var_15 = 3359707104U;
int zero = 0;
unsigned int var_18 = 3070987989U;
signed char var_19 = (signed char)20;
int var_20 = -1166256862;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 15226124652634304912ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
