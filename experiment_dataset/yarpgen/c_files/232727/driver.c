#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7432914919836453952LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4271497528300332923LL;
unsigned long long int var_5 = 16805866448552955202ULL;
signed char var_6 = (signed char)64;
unsigned short var_9 = (unsigned short)18074;
int zero = 0;
unsigned short var_12 = (unsigned short)1431;
signed char var_13 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
