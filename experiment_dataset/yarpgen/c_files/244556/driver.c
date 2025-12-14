#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6169828571441107758ULL;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_17 = -976899746;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-74;
long long int var_20 = -3716619693389262687LL;
long long int var_21 = -7884864756869658220LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
