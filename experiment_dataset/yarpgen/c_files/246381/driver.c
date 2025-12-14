#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14447;
long long int var_3 = 948444994019693826LL;
unsigned short var_4 = (unsigned short)15380;
unsigned long long int var_5 = 3590881638133712527ULL;
unsigned long long int var_6 = 18259498321548582392ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 1320300400;
unsigned long long int var_9 = 16056253209389258310ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 922897596402802439ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
