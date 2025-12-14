#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 935810645585513499ULL;
signed char var_7 = (signed char)61;
unsigned char var_9 = (unsigned char)217;
unsigned long long int var_10 = 6915891977201362288ULL;
unsigned char var_11 = (unsigned char)127;
int zero = 0;
unsigned int var_17 = 997097199U;
unsigned long long int var_18 = 7617437452573589065ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)152;
unsigned long long int var_21 = 10965850183043064438ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
