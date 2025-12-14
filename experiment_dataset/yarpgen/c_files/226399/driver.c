#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57383;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)52918;
unsigned char var_8 = (unsigned char)38;
unsigned short var_11 = (unsigned short)28803;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)180;
int zero = 0;
unsigned char var_17 = (unsigned char)207;
unsigned short var_18 = (unsigned short)64286;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
