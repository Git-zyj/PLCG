#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17235141628933170321ULL;
int var_4 = -524587193;
int var_7 = 876837784;
int var_8 = -936188017;
signed char var_10 = (signed char)-111;
int var_11 = 1436151087;
unsigned long long int var_12 = 13294836486008574455ULL;
int zero = 0;
long long int var_13 = 334654825397952092LL;
unsigned short var_14 = (unsigned short)50758;
signed char var_15 = (signed char)64;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)23003;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
