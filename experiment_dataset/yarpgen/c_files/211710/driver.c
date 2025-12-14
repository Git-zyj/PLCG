#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14185346213486017525ULL;
short var_2 = (short)9292;
unsigned int var_3 = 4172217683U;
unsigned int var_8 = 1015179206U;
signed char var_12 = (signed char)97;
unsigned long long int var_14 = 5959247810198876152ULL;
long long int var_16 = 7302434313894475910LL;
int zero = 0;
long long int var_17 = 602380024214746430LL;
long long int var_18 = 6572780609521123812LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
