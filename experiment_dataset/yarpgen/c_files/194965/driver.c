#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1571460713;
unsigned char var_3 = (unsigned char)77;
unsigned char var_4 = (unsigned char)151;
unsigned long long int var_5 = 15560404440122795244ULL;
unsigned long long int var_6 = 180625661507592750ULL;
unsigned short var_9 = (unsigned short)42845;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)107;
int zero = 0;
int var_15 = -1721869294;
unsigned long long int var_16 = 14776860192950917596ULL;
short var_17 = (short)-20289;
_Bool var_18 = (_Bool)0;
int var_19 = -635588016;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
