#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1749910623;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 16718918211925870708ULL;
unsigned short var_13 = (unsigned short)50284;
signed char var_18 = (signed char)-69;
int zero = 0;
long long int var_19 = -7654280018051820107LL;
long long int var_20 = -8455272393636335068LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
