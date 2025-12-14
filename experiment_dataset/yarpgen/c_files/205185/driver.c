#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2746546284903721617LL;
_Bool var_3 = (_Bool)1;
short var_13 = (short)-30900;
unsigned long long int var_17 = 4567215631995610330ULL;
int zero = 0;
short var_19 = (short)21215;
unsigned int var_20 = 3659775044U;
unsigned int var_21 = 4056971087U;
short var_22 = (short)3718;
short var_23 = (short)22737;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
