#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2729519797U;
unsigned short var_1 = (unsigned short)58324;
unsigned int var_2 = 1453008911U;
unsigned int var_3 = 392955723U;
unsigned int var_4 = 3600161231U;
int var_6 = 412391708;
unsigned int var_7 = 3688862255U;
signed char var_8 = (signed char)27;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1766935411;
unsigned long long int var_12 = 3109824919805345007ULL;
unsigned int var_13 = 1020511399U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
