#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4883061485847691623LL;
unsigned char var_3 = (unsigned char)31;
int var_8 = -1537076235;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)17040;
int var_16 = 2104867406;
int var_18 = -520046404;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)32;
signed char var_21 = (signed char)118;
unsigned char var_22 = (unsigned char)58;
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
