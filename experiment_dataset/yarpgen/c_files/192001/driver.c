#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
int var_1 = -1094461946;
_Bool var_6 = (_Bool)0;
short var_9 = (short)16271;
signed char var_10 = (signed char)56;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8478482501087520589ULL;
unsigned char var_13 = (unsigned char)23;
void init() {
}

void checksum() {
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
