#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_6 = 2188710549U;
unsigned long long int var_7 = 12780402919903948401ULL;
int var_8 = -575416579;
long long int var_9 = -5885338431408767957LL;
int zero = 0;
unsigned int var_12 = 3896681461U;
unsigned char var_13 = (unsigned char)76;
int var_14 = -798696775;
unsigned long long int var_15 = 8249957389947357445ULL;
long long int var_16 = -8572123046075334692LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
