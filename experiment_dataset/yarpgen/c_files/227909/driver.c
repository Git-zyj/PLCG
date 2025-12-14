#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1668011499385242439ULL;
unsigned long long int var_4 = 6445284657436652437ULL;
short var_7 = (short)14334;
unsigned char var_8 = (unsigned char)209;
unsigned long long int var_9 = 2691341766176513892ULL;
long long int var_10 = 2815740320294567575LL;
signed char var_11 = (signed char)104;
unsigned int var_13 = 1813199431U;
unsigned char var_15 = (unsigned char)89;
int var_17 = -351908140;
int zero = 0;
signed char var_18 = (signed char)121;
int var_19 = -878785837;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)54;
unsigned int var_22 = 3576951114U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
