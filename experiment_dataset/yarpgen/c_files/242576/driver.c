#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
signed char var_5 = (signed char)-51;
unsigned long long int var_6 = 6647917634042322791ULL;
signed char var_7 = (signed char)-4;
short var_8 = (short)29159;
unsigned char var_10 = (unsigned char)181;
unsigned short var_11 = (unsigned short)39347;
unsigned short var_12 = (unsigned short)57282;
unsigned long long int var_13 = 8357527257712854805ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)19;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)7;
unsigned short var_19 = (unsigned short)27140;
unsigned char var_20 = (unsigned char)48;
int var_21 = -2024391679;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
