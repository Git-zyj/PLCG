#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_11 = 8046503490476353100ULL;
long long int var_12 = 6938556962350328280LL;
int zero = 0;
unsigned short var_20 = (unsigned short)1117;
int var_21 = -1286544325;
int var_22 = 1866396021;
unsigned char var_23 = (unsigned char)31;
unsigned long long int var_24 = 11238776313664775082ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
