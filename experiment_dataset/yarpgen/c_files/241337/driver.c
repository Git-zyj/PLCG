#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3473;
unsigned int var_2 = 3326648218U;
unsigned int var_3 = 4194113179U;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)177;
int zero = 0;
unsigned int var_11 = 1937278802U;
int var_12 = -1532349380;
long long int var_13 = -5510947199732311735LL;
_Bool var_14 = (_Bool)0;
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
