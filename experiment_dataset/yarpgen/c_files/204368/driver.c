#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22945;
long long int var_2 = 668828954992755915LL;
unsigned long long int var_3 = 6933481622679606681ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 1390197332;
int var_10 = -1297153152;
int zero = 0;
unsigned short var_11 = (unsigned short)34358;
signed char var_12 = (signed char)-109;
int var_13 = -111909501;
int var_14 = -790665670;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
