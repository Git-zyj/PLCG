#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)20734;
unsigned char var_8 = (unsigned char)15;
unsigned short var_10 = (unsigned short)10772;
unsigned long long int var_11 = 15335864784919148448ULL;
long long int var_12 = 5347385690954650489LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1258511433;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 15910591612018485843ULL;
void init() {
}

void checksum() {
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
