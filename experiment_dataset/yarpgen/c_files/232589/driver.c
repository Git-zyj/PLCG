#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4021847199382153071LL;
unsigned long long int var_10 = 4311951832898616045ULL;
unsigned short var_12 = (unsigned short)14833;
int zero = 0;
unsigned long long int var_17 = 9969080583591776275ULL;
short var_18 = (short)-12452;
unsigned long long int var_19 = 3572903269389559020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
