#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11386111385944974625ULL;
int var_1 = 1365478593;
unsigned int var_2 = 79577556U;
signed char var_3 = (signed char)58;
unsigned long long int var_5 = 2821007568294447986ULL;
unsigned long long int var_6 = 17849061499114688280ULL;
signed char var_7 = (signed char)10;
unsigned int var_10 = 3177315621U;
long long int var_11 = -1143843642470362805LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3254358875U;
int zero = 0;
short var_18 = (short)889;
long long int var_19 = 8532908573934254207LL;
unsigned char var_20 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
