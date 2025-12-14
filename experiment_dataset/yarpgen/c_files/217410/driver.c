#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39785;
short var_1 = (short)17413;
int var_3 = -76181688;
int var_4 = 1199715349;
signed char var_6 = (signed char)-30;
int zero = 0;
int var_10 = -1634559942;
long long int var_11 = 3084669574160510281LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
