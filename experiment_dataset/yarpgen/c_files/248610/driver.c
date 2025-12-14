#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4411524488707145539ULL;
long long int var_3 = -4666685016539965371LL;
int var_4 = 880836034;
signed char var_5 = (signed char)-112;
signed char var_8 = (signed char)-49;
int zero = 0;
long long int var_13 = 6399271737382102890LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 9014191988273555299LL;
signed char var_16 = (signed char)114;
void init() {
}

void checksum() {
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
