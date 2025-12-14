#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 930611795;
unsigned char var_1 = (unsigned char)226;
signed char var_4 = (signed char)68;
signed char var_5 = (signed char)90;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 6934104996853387518ULL;
int var_9 = -623123080;
signed char var_10 = (signed char)-35;
int zero = 0;
int var_13 = -755300871;
long long int var_14 = 7888309156820321034LL;
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
