#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7724712219017515817LL;
long long int var_2 = 4552824373136529789LL;
long long int var_4 = -4183099441699971524LL;
_Bool var_5 = (_Bool)1;
int zero = 0;
long long int var_12 = -6116423945238936042LL;
long long int var_13 = -6082645399624120619LL;
unsigned char var_14 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
