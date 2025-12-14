#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5817614386392633655ULL;
unsigned short var_10 = (unsigned short)16832;
unsigned long long int var_11 = 5100827883806876793ULL;
int var_16 = 1224454562;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)21904;
unsigned short var_20 = (unsigned short)27048;
long long int var_21 = 4027537435579970407LL;
unsigned long long int var_22 = 5719193781012027233ULL;
void init() {
}

void checksum() {
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
