#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-56;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2354783245U;
unsigned long long int var_15 = 17552960187571775378ULL;
int zero = 0;
signed char var_18 = (signed char)-61;
long long int var_19 = 2275530894077113148LL;
long long int var_20 = -6124902060690282908LL;
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
