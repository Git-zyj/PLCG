#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4291169811611652399LL;
unsigned long long int var_2 = 15710899572912625757ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)32503;
unsigned int var_15 = 979615839U;
int zero = 0;
unsigned int var_18 = 675659531U;
unsigned long long int var_19 = 1828591403434725897ULL;
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
