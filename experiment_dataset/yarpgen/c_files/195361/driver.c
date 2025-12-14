#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38151;
unsigned short var_2 = (unsigned short)30231;
_Bool var_7 = (_Bool)1;
long long int var_8 = 7846291303253863450LL;
unsigned long long int var_9 = 14288765896435193198ULL;
int var_10 = -1214804932;
_Bool var_11 = (_Bool)0;
short var_13 = (short)10261;
int zero = 0;
unsigned int var_19 = 3777079997U;
int var_20 = 1942944512;
void init() {
}

void checksum() {
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
