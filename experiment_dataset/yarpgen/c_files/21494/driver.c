#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-83;
int var_6 = -1746838613;
short var_8 = (short)10629;
unsigned int var_13 = 4208242771U;
long long int var_18 = -3160379724729014714LL;
int zero = 0;
unsigned short var_19 = (unsigned short)62600;
unsigned char var_20 = (unsigned char)162;
signed char var_21 = (signed char)-56;
unsigned int var_22 = 2965397235U;
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
