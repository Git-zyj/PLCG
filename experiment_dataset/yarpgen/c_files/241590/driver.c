#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
signed char var_3 = (signed char)126;
unsigned long long int var_4 = 17258297386708635935ULL;
signed char var_6 = (signed char)46;
signed char var_7 = (signed char)-117;
long long int var_8 = 163301789445430812LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-71;
unsigned char var_11 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
