#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26903;
short var_1 = (short)27806;
long long int var_2 = -2509952013102769540LL;
long long int var_6 = -1022262849293130921LL;
unsigned long long int var_7 = 4773248525458586013ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)42161;
signed char var_12 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
