#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4164751112048977135ULL;
signed char var_1 = (signed char)101;
unsigned long long int var_6 = 16144051181842568379ULL;
signed char var_8 = (signed char)-121;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6885913220930936581LL;
unsigned long long int var_13 = 18130405538547685937ULL;
signed char var_14 = (signed char)65;
int zero = 0;
long long int var_18 = 156709962630654970LL;
unsigned int var_19 = 1187871953U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
