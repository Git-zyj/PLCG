#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5195891997985035632LL;
short var_7 = (short)14294;
unsigned char var_8 = (unsigned char)132;
long long int var_9 = -6910482926379249169LL;
short var_10 = (short)-28821;
int var_12 = -538121146;
unsigned char var_19 = (unsigned char)107;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 17781527280861707355ULL;
long long int var_22 = -575349327463783648LL;
unsigned char var_23 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
