#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5507982651579898936LL;
unsigned short var_5 = (unsigned short)56723;
long long int var_7 = 6135645760721039813LL;
int var_8 = 833837358;
unsigned long long int var_11 = 16082385841109665259ULL;
int zero = 0;
unsigned long long int var_18 = 6543435884803794164ULL;
long long int var_19 = -4969908649063292616LL;
short var_20 = (short)1007;
unsigned long long int var_21 = 598395532749688349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
