#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7295334308403781538LL;
unsigned long long int var_1 = 13538726936666491422ULL;
unsigned long long int var_3 = 9175523584160626633ULL;
unsigned short var_4 = (unsigned short)13839;
signed char var_9 = (signed char)-26;
unsigned short var_13 = (unsigned short)54738;
int zero = 0;
int var_19 = -1632011846;
unsigned int var_20 = 2514698941U;
void init() {
}

void checksum() {
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
