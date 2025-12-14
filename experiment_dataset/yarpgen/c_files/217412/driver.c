#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7891193973820449394LL;
unsigned short var_4 = (unsigned short)61079;
signed char var_7 = (signed char)34;
_Bool var_8 = (_Bool)1;
int var_9 = 1020494074;
_Bool var_10 = (_Bool)1;
int var_11 = -893454651;
int var_12 = -1775924072;
int zero = 0;
unsigned long long int var_13 = 6152366690056600701ULL;
signed char var_14 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
