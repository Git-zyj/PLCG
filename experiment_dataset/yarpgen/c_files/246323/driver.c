#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7128;
_Bool var_11 = (_Bool)0;
int var_15 = -23718147;
short var_17 = (short)1321;
signed char var_18 = (signed char)82;
int zero = 0;
int var_19 = -970547340;
int var_20 = 1623452815;
unsigned long long int var_21 = 3529845919695437174ULL;
unsigned short var_22 = (unsigned short)50136;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
