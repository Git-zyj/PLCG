#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
int var_2 = 1269553223;
short var_7 = (short)-12657;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)3877;
int var_11 = 1964805881;
unsigned char var_16 = (unsigned char)165;
unsigned int var_17 = 3525703574U;
signed char var_19 = (signed char)-114;
int zero = 0;
long long int var_20 = -8536382892367521917LL;
short var_21 = (short)24930;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
