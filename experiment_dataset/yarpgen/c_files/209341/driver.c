#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
signed char var_2 = (signed char)104;
long long int var_7 = 7029514004496180329LL;
int var_8 = -497944668;
long long int var_15 = -5360677062941573173LL;
unsigned long long int var_18 = 9358521237603065673ULL;
int zero = 0;
short var_19 = (short)13558;
unsigned short var_20 = (unsigned short)14646;
int var_21 = -1996857197;
signed char var_22 = (signed char)85;
void init() {
}

void checksum() {
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
