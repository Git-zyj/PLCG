#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned long long int var_1 = 16216550843210928877ULL;
short var_3 = (short)24023;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-125;
int var_10 = -846733445;
int zero = 0;
unsigned long long int var_11 = 4964810029606011720ULL;
short var_12 = (short)18260;
int var_13 = 298633588;
unsigned char var_14 = (unsigned char)219;
unsigned int var_15 = 3579886248U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
