#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9198815409977522412ULL;
unsigned int var_2 = 355138978U;
unsigned char var_5 = (unsigned char)55;
unsigned long long int var_6 = 2968591957081952701ULL;
long long int var_7 = 1846295036658171774LL;
unsigned long long int var_8 = 3474350364804535799ULL;
unsigned long long int var_10 = 18151445291411250641ULL;
unsigned long long int var_12 = 1101994236825249463ULL;
int zero = 0;
unsigned long long int var_14 = 9958223575005101872ULL;
unsigned long long int var_15 = 14973809443687186807ULL;
unsigned long long int var_16 = 2201460022802769246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
