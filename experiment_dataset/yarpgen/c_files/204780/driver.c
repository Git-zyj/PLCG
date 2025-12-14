#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1112616932;
short var_4 = (short)19992;
int var_5 = -1258264163;
unsigned char var_6 = (unsigned char)180;
int var_10 = -1300656057;
unsigned short var_12 = (unsigned short)52513;
_Bool var_14 = (_Bool)1;
int var_15 = -1642454492;
int zero = 0;
short var_17 = (short)1563;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-61;
void init() {
}

void checksum() {
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
