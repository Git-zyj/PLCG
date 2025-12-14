#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-103;
unsigned int var_6 = 2856287234U;
long long int var_7 = 6096884353214322329LL;
int var_9 = -1858448402;
int var_10 = 1468646282;
unsigned long long int var_15 = 6091978512182227131ULL;
unsigned long long int var_18 = 3821423668203700849ULL;
int zero = 0;
signed char var_20 = (signed char)-55;
unsigned short var_21 = (unsigned short)52068;
unsigned short var_22 = (unsigned short)42323;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
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
