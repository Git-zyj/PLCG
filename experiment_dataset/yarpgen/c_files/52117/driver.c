#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned long long int var_2 = 2339432926818357013ULL;
unsigned short var_3 = (unsigned short)34100;
signed char var_4 = (signed char)53;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)120;
signed char var_11 = (signed char)106;
signed char var_12 = (signed char)-116;
int zero = 0;
int var_13 = -1464956962;
unsigned char var_14 = (unsigned char)238;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
