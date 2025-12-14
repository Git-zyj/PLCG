#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5889897221742848851LL;
unsigned long long int var_1 = 17015830363758387410ULL;
long long int var_2 = 4777269681115252983LL;
int var_5 = 1177701912;
unsigned short var_7 = (unsigned short)9330;
signed char var_8 = (signed char)-53;
unsigned int var_10 = 3982299169U;
unsigned short var_11 = (unsigned short)30208;
int zero = 0;
signed char var_12 = (signed char)-31;
unsigned int var_13 = 3853348385U;
long long int var_14 = 9022828896139135224LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
