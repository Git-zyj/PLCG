#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
_Bool var_1 = (_Bool)1;
int var_5 = 260171402;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5647907682931249232LL;
signed char var_8 = (signed char)126;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-43;
unsigned short var_12 = (unsigned short)52508;
unsigned int var_14 = 2898957705U;
short var_15 = (short)6030;
int zero = 0;
unsigned char var_18 = (unsigned char)126;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
