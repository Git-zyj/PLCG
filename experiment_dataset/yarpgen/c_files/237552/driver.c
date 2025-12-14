#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 113618751;
unsigned int var_6 = 2873184682U;
unsigned int var_7 = 2829870161U;
unsigned long long int var_8 = 6218987307334791335ULL;
int zero = 0;
int var_12 = -1359195399;
long long int var_13 = 8567152945770343273LL;
unsigned long long int var_14 = 5140126092094205155ULL;
_Bool var_15 = (_Bool)1;
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
