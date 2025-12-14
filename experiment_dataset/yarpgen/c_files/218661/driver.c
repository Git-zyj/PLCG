#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8931387223375349130LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 13108107893702129200ULL;
int zero = 0;
long long int var_13 = -1684228466310125119LL;
int var_14 = -1426829366;
unsigned short var_15 = (unsigned short)23317;
void init() {
}

void checksum() {
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
