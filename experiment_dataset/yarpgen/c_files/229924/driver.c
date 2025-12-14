#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14781772928649203988ULL;
long long int var_2 = -5857939227909918127LL;
unsigned short var_3 = (unsigned short)32358;
signed char var_6 = (signed char)-106;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)148;
unsigned int var_11 = 1592500523U;
int zero = 0;
long long int var_13 = 7424806892943234171LL;
signed char var_14 = (signed char)-4;
void init() {
}

void checksum() {
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
