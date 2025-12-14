#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12903776738483673901ULL;
int var_7 = -1971391667;
signed char var_8 = (signed char)-76;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
unsigned int var_20 = 1687957345U;
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
