#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10696782100066918378ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 15270258397688110688ULL;
signed char var_5 = (signed char)-60;
unsigned long long int var_7 = 3591878068253423630ULL;
unsigned long long int var_10 = 16223811551944559485ULL;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned long long int var_15 = 5256458367065417371ULL;
signed char var_16 = (signed char)78;
unsigned int var_17 = 2380262510U;
long long int var_18 = 6025792504670586627LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
