#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
long long int var_2 = 5662995463541605319LL;
unsigned char var_3 = (unsigned char)107;
_Bool var_6 = (_Bool)1;
int zero = 0;
long long int var_13 = 3771965836662695178LL;
short var_14 = (short)31440;
long long int var_15 = 8191738638407320226LL;
unsigned short var_16 = (unsigned short)31811;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
