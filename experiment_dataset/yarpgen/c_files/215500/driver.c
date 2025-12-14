#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8922726310738212492LL;
unsigned short var_1 = (unsigned short)18027;
unsigned int var_6 = 3618052689U;
unsigned int var_7 = 2723995190U;
unsigned short var_8 = (unsigned short)9472;
signed char var_13 = (signed char)-4;
long long int var_15 = -2754557887484557627LL;
long long int var_16 = 8758109924786942070LL;
long long int var_17 = -4598378148024895451LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)46026;
int var_20 = 1683671136;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
